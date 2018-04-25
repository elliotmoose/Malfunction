using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleSpawner : MonoBehaviour
{

	public float groupRotateSpeed = 4;
	public float spawnRange = 65;
	public static Vector2 lastEntry = new Vector2 (1, 1);

	private Vector3[] configs = new Vector3[] {	
		new Vector3 (0, 0, 0),
		new Vector3 (0, 0, 1),
		new Vector3 (0, 0, 2),
		new Vector3 (0, 1, 0),
		new Vector3 (0, 1, 1),
		new Vector3 (0, 1, 2),
		new Vector3 (0, 2, 0),
		new Vector3 (0, 2, 1),
		new Vector3 (0, 2, 2),
		new Vector3 (1, 0, 0),
		new Vector3 (1, 0, 1),
		new Vector3 (1, 0, 2),
		new Vector3 (1, 1, 0),
		new Vector3 (1, 1, 1),
		new Vector3 (1, 1, 2),
		new Vector3 (1, 2, 0),
		new Vector3 (1, 2, 1),
		new Vector3 (1, 2, 2),
		new Vector3 (2, 0, 0),
		new Vector3 (2, 0, 1),
		new Vector3 (2, 0, 2),
		new Vector3 (2, 1, 0),
		new Vector3 (2, 1, 1),
		new Vector3 (2, 1, 2),
		new Vector3 (2, 2, 0),
		new Vector3 (2, 2, 1),
		new Vector3 (2, 2, 2),
	};

	//state variables
	public int wave = 1;

	//settings variables

	//seconds

	// Use this for initialization
	void Start ()
	{				
	}
	
	// Update is called once per frame
	void Update ()
	{		
		
	}

	public void BeginBlockSpawnCycle ()
	{			
		SpawnCycle ();
	}

	private void SpawnCycle ()
	{		
		Invoke ("SpawnGroup", GameEngine.waveIntervals);
		Invoke ("SpawnCycle", GameEngine.waveIntervals);
	}

	public void EndBlockSpawnCycle ()
	{
		CancelInvoke ();
	}

	public void SpawnGroup ()
	{
		Vector3 config = configs [Random.Range (0, configs.Length - 1)];

		while (config [(int)ObstacleSpawner.lastEntry.y] == ObstacleSpawner.lastEntry.x) {
			config = configs [Random.Range (0, configs.Length - 1)];
		}
		//Debug.Log (config);

		Vector3 groupSpawnPos = new Vector3 (0, 0, transform.position.z - spawnRange);

		GameObject groupObject = new GameObject ();
		groupObject.transform.position = groupSpawnPos;
		groupObject.tag = "Obstacle";
		groupObject.name = "Wave" + wave.ToString ();

		BoxCollider bc = groupObject.AddComponent<BoxCollider> ();
		bc.isTrigger = true;
		bc.size = new Vector3 (10, 10, 10);



		ObstacleGroup groupScript = groupObject.AddComponent<ObstacleGroup> ();
		groupScript.Initialize (config, groupRotateSpeed, wave);
		wave++;

		//spawn indicator
		Vector3 indicatorSpawnPos = new Vector3 (0, -0.5f, transform.position.z - spawnRange);
		Object indicatorPrefab = Resources.Load ("Prefabs/IndicatorSet");
		GameObject indicator = (GameObject)GameObject.Instantiate (indicatorPrefab, indicatorSpawnPos, Quaternion.identity);
		groupScript.indicator = indicator;

		GameEngine.rocketMan.PushAssessDifficulty ();
	}


}
