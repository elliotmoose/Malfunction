using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameEngine : MonoBehaviour
{
	//state
	public static bool gameInProgress = false;
	public static float gameTime = 0;
	public static int points = 0;
	public static int currentWave = 0;
	public static float gameSpeed = 10;
	public static float gameSpeedOffset = 0;
	public static float waveIntervals = 5f;

	public static int introStage = 0;
	public static float currentStageTimer = 0;
	//refrences
	public GameObject context;

	//scripts
	public static ObstacleSpawner spawner;
	public static GameUI ui;
	public static GameObject player;
	public static RocketMan rocketMan;

	void Start ()
	{

		//link scripts
		ui = Camera.main.GetComponent<GameUI> ();
		spawner = Camera.main.GetComponent<ObstacleSpawner> ();
		player = GameObject.FindGameObjectWithTag ("Player");
		rocketMan = player.GetComponent<RocketMan> ();
	}
	
	// Update is called once per frame
	void Update ()
	{
		UpdateTimer ();
		MoveContext ();
	}


	public void MoveContext ()
	{
		if (gameInProgress) {
			context.transform.position -= new Vector3 (0, 0, (gameSpeed * rocketMan.boost) * Time.deltaTime);
		}
	}

	private void UpdateTimer ()
	{
		if (gameInProgress) {
			gameTime += Time.deltaTime;	
		}
	}

	public static void StartGame ()
	{
		GameObject.Find ("SkyboxCam").GetComponent<Animator> ().SetTrigger ("fall");

		#region reset
		foreach (GameObject go in GameObject.FindGameObjectsWithTag("Obstacle")) {
			GameObject.Destroy (go);
		}

		Camera.main.GetComponent<GameEngine> ().context.transform.position = Vector3.zero;
		rocketMan.transform.localPosition = Vector3.zero;
		rocketMan.Revive ();
		rocketMan.ExplodeWing ();

		//reset spawner
		GameEngine.gameSpeed = 10;
		spawner.groupRotateSpeed = 4;
		spawner.wave = 1;

		//reset player
		rocketMan.completedWave = 0;
		rocketMan.currentDirection = 1;
		rocketMan.currentAxis = 0;
		rocketMan.boost = 1;
		rocketMan.gunLifeTimer = 0;
		rocketMan.SetShield (false);
		rocketMan.SetParticleEffects (true);

		points = 0;
		currentWave = 0;
		#endregion
		//Start Spawn
		spawner.BeginBlockSpawnCycle ();

		//state
		gameInProgress = true;


		//UI
		ui.SetUIGameState (true);
		ui.UpdateScore (points);
	}

	public static void PauseGame ()
	{
		Time.timeScale = 0;
	}

	public static void ResumeGame ()
	{
		Time.timeScale = 1;
	}

	public static void EndGame ()
	{
		gameInProgress = false;

		if (points > User.highscore) {
			User.NewHighscore (points);
		}
			
		//break cycle
		Camera.main.GetComponent<ObstacleSpawner> ().EndBlockSpawnCycle ();

		//UI
		ui.SetUIGameState (false);
		//UI
		ui.UpdateCoins ();
	}

	public static void AddPoint ()
	{
		points++;

		//update speed
		float waveIntervalCap = 4;
		waveIntervals = Mathf.Max (waveIntervals - 0.3f, waveIntervalCap);

		if (gameSpeed < 20f) {
			gameSpeed += 1f;
		} else {
			if (gameSpeed < 30f) {
				gameSpeed += 0.2f;	
			}
		}

		//update UI
		ui.UpdateScore (points);
	}

	public static void AddCoin ()
	{
		//backend
		User.coins++;
		User.SaveCoins ();
	}



}
