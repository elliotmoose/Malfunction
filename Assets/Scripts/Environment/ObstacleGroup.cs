using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleGroup : MonoBehaviour
{
	public float spacing = 0.1f;
	public float rotateSpeed = 4;

	public Vector3 targetPosition = new Vector3 (0, 0, 0);
	public GameObject indicator;

	public int waveID = 0;
	public Vector3 config = new Vector3 (0, 0, 0);
	public int rotations = 0;
	//x:red,y:yellow,z:green
	static Object obstacle;

	private List<GameObject> allObstacles = new List<GameObject> ();

	public static int numberOfLayers = 5;


	void Awake ()
	{
		Camera.main.GetComponent<PlayerControls> ().touchBeginEvent += TouchEnded;
	}

	void OnDestroy ()
	{		
		try {
			Camera.main.GetComponent<PlayerControls> ().touchBeginEvent -= TouchEnded;
		} catch {
			
		}


	}

	void Start ()
	{
		
	}
	
	// Update is called once per frame
	void Update ()
	{		

		//rotation
		if (transform.position.y - targetPosition.y > 0.1) {
			Vector3 direction = new Vector3 (transform.position.x, targetPosition.y - transform.position.y, targetPosition.z);
			transform.position += direction.normalized * rotateSpeed / 10;

			//wrap
			foreach (GameObject obstacle in allObstacles) {			

				float layerHeight = 3 * (2/*height of block*/ + spacing);
				float lastBlockYPos = -(ObstacleGroup.numberOfLayers / 2 * layerHeight) - (2 + spacing);

				if (obstacle.transform.position.y < lastBlockYPos) {
					obstacle.transform.localPosition += new Vector3 (0, ObstacleGroup.numberOfLayers * layerHeight, 0);	
				}
			}
		}

		//removal
		if (transform.position.z > Camera.main.transform.position.z) {
			Remove ();
		}


		//indicators
		indicator.transform.GetChild (0).gameObject.SetActive (GameEngine.currentWave == waveID - 1);
		indicator.transform.GetChild (1).gameObject.SetActive (GameEngine.currentWave == waveID - 1);
		
	}

	public void Initialize (Vector3 config, float rotateSpeed, int waveID)
	{
		this.config = config;
		this.rotateSpeed = rotateSpeed;
		this.waveID = waveID;

		SpawnObstacles ();
	}

	//	private void Move ()
	//	{
	//		if (GameEngine.gameInProgress) {
	//			transform.position += new Vector3 (0, 0, speed * Time.deltaTime);
	//		}
	//	}


	private void SpawnObstacles ()
	{	
		//LOAD RESOURCE
		if (ObstacleGroup.obstacle == null) {
			ObstacleGroup.obstacle = Resources.Load ("Obstacle");
		}
			
		//POWERUPS - every 5 wavesw
		int powerUpRow = -1;
		int powerUpColumn = -1;

		//randomize position
		if (waveID != 0 && (float)Mathf.Floor (waveID / 5) == ((float)waveID / 5)) {
			powerUpRow = Random.Range (0, 2);
			powerUpColumn = (int)config [powerUpRow];				
		}

		//randomize type
		int powerUpIndex = Random.Range (0, 5);
		PowerUp pu = (PowerUp)powerUpIndex;
		//pu = (PowerUp)4;



		for (int layerIndex = 0; layerIndex < ObstacleGroup.numberOfLayers; layerIndex++) {
			for (int rowIndex = 0; rowIndex < 3; rowIndex++) {

				for (int columnIndex = 0; columnIndex < 3; columnIndex++) {
					
					float layerHeight = 3 * (2/*height of block*/ + spacing);
					Vector3 spawnPos = new Vector3 ((columnIndex - 1) * (2 + spacing), (rowIndex - 1) * (2 + spacing) + layerHeight * (layerIndex - Mathf.Floor (ObstacleGroup.numberOfLayers / 2)), 0);

					//spawn
					GameObject newObstacle = (GameObject)GameObject.Instantiate (ObstacleGroup.obstacle, transform);	
					newObstacle.transform.localPosition = spawnPos;
					allObstacles.Add (newObstacle);

					//color
					Color[] colors = new Color [3]{ Color.red, Color.yellow, Color.green };
					Color thisColor = colors [rowIndex];

					int globalRowIndex = (layerIndex * 3) + rowIndex;
					Obstacle obstacleScript = newObstacle.GetComponent<Obstacle> ();
					obstacleScript.originalColor = thisColor;
					obstacleScript.globalRowIndex = globalRowIndex;
					obstacleScript.column = columnIndex;

					//if main group
					if (layerIndex == Mathf.Floor (ObstacleGroup.numberOfLayers / 2)) {						
						newObstacle.GetComponent<Renderer> ().material.color = new Color (thisColor.r, thisColor.g, thisColor.b, 1);
					} else {												
						obstacleScript.UpdateAlpha ();
						//Debug.Log ("Row: " + globalRowIndex.ToString () + " Alpha: " + alpha.ToString ());
					}						



					//hole/powerup
					if (columnIndex == config [rowIndex]) {
						newObstacle.GetComponent<Obstacle> ().SetInactive ();

						if (rowIndex == powerUpRow && columnIndex == powerUpColumn) {
							obstacleScript.SetPowerUp (pu);	
						}						
					}
//
//					//test
//					obstacleScript.SetPowerUp (pu);	
				}
			}
		}
	}

	public void TouchEnded (Vector3 touchPos)
	{
		if (!GameEngine.gameInProgress) {
			return;
		}

		Rotate ();
	}

	public void Rotate ()
	{		
		targetPosition += new Vector3 (0, -(2 + spacing), 0);
		rotations++;
		foreach (GameObject go in allObstacles) {

			Obstacle obstacleScript = go.GetComponent<Obstacle> ();
			obstacleScript.globalRowIndex--;

			if (obstacleScript.globalRowIndex == -1) {
				obstacleScript.globalRowIndex = 3 * numberOfLayers - 1;
			}

			obstacleScript.UpdateAlpha ();
		}

		if (waveID == GameEngine.points + 1) {
			GameEngine.rocketMan.PushAssessDifficulty ();
		}
	}


	public void Remove ()
	{
		for (int i = 0; i < allObstacles.Count; i++) {
			GameObject go = allObstacles [i];
			GameObject.Destroy (go);
			allObstacles.RemoveAt (i);
		}
			
		GameObject.Destroy (indicator);
		GameObject.Destroy (this.gameObject);
	}
}
