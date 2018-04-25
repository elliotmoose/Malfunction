using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class RocketMan : MonoBehaviour
{
	public int currentAxis = 0;
	public int currentDirection = 1;
	public bool isAlive = true;
	public float speed = 5f;
	public int completedWave = 0;
	private bool isMoving = false;

	public GameObject bulletPrefab;
	public GameObject explosionObject;
	public GameObject target;
	public GameObject context;
	public GameObject shieldObject;
	public List<GameObject> aliveParticleEffects;
	public GameObject wingExplosionParticleEffect;
	private MeshRenderer meshRenderer;
	public List<GameObject> gunSpawnPoints;

	//player buffs/Debuffs
	public bool shield = false;
	public float gunLifeTimer = 0;
	public float gunRunTimer = 0;
	public float gunCooldown = 0.3f;
	public float boost = 0;
	public float boostLifetime = 0;


	// Use this for initialization
	void Awake ()
	{
		Camera.main.GetComponent<PlayerControls> ().touchBeginEvent += PlayerDidTap;	
	}

	void Start ()
	{
		meshRenderer = GetComponent<MeshRenderer> ();
	}
	
	// Update is called once per frame
	void Update ()
	{
		#region movement
		if (isMoving) {

			Vector3 direction = new Vector3 (currentAxis * 2 - transform.position.x, 0, 0);

			transform.localPosition += direction.normalized * speed / 10;

			if (direction.magnitude < 0.1) {
				isMoving = false;
			}
		}

		#endregion

		#region boost
		if (boostLifetime > 0) {			
			boostLifetime -= Time.deltaTime;
		} else {
			boost = 1; 
			boostLifetime = 0;
		}
		#endregion

		#region gun

		if (gunLifeTimer > 0) {
			gunLifeTimer -= Time.deltaTime;
			gunRunTimer -= Time.deltaTime;

			if (gunRunTimer <= 0) {
				foreach (GameObject go in gunSpawnPoints) {
					GameObject.Instantiate (bulletPrefab, go.transform.position, Quaternion.identity, transform);	

				}					
				gunRunTimer = gunCooldown;
			}
		} else {
			
		}

		#endregion

	}

	#region basic controls and gameplay

	void PlayerDidTap (Vector3 touchPos)
	{
		if (!GameEngine.gameInProgress) {
			return;
		}


		if (currentAxis == 1) {
			currentDirection = -1;
		}
		if (currentAxis == -1) {
			currentDirection = 1;
		}

		Animator animator = GetComponent<Animator> ();

		if (currentDirection > 0) {
			animator.SetTrigger ("TiltLeft");
		} else {
			animator.SetTrigger ("TiltRight");
		}

		currentAxis += currentDirection;

		target.transform.position = new Vector3 (currentAxis * 2, target.transform.position.y - 2.1f, 0);

		//actual movement
		isMoving = true;
	}

	public void Die ()
	{
		isAlive = false;
		meshRenderer.enabled = false;
		explosionObject.SetActive (true);
		SetShield (false);
		SetParticleEffects (false);		
	}

	public void Revive ()
	{
		isAlive = true;
		meshRenderer.enabled = true;
		explosionObject.SetActive (false);
		SetParticleEffects (true);
	}

	public void SetParticleEffects (bool enabled)
	{
		foreach (GameObject go in aliveParticleEffects) {
			go.SetActive (enabled);
		}
	}

	public void ExplodeWing ()
	{
		wingExplosionParticleEffect.SetActive (false);
		wingExplosionParticleEffect.SetActive (true);
	}

	#endregion

	#region difficulty

	public int AssessDifficulty ()
	{
		int axis = currentAxis + 1;
		int direction = currentDirection;

		GameObject groupObject = GameObject.Find ("Wave" + (GameEngine.currentWave + 1).ToString ());
		if (groupObject == null) {			
			return -1;
		}

		ObstacleGroup obstacleGroupScript = groupObject.GetComponent<ObstacleGroup> ();
		if (obstacleGroupScript == null) {
			return -1;
		}
		Vector3 currentConfig = obstacleGroupScript.config;
		int rotations = obstacleGroupScript.rotations;

		rotations = rotations - (int)Mathf.Floor (rotations / 3) * 3;

		switch (rotations) {
		case 0:
			{				
				break;
			}
		case 1:
			{
				currentConfig = new Vector3 (currentConfig.y, currentConfig.z, currentConfig.x);
				break;
			}
		case 2:
			{
				currentConfig = new Vector3 (currentConfig.z, currentConfig.x, currentConfig.y);
				break;
			}
		default:
			{				
				break;		
			}
		}

		int numberOfSteps = 0;
		while (currentConfig.y != axis) {
			if (axis == 2) {
				direction = -1;
			}
			if (axis == 0) {
				direction = 1;
			}
				
			axis += direction;

			numberOfSteps++;
			currentConfig = new Vector3 (currentConfig.y, currentConfig.z, currentConfig.x);
		}


		return numberOfSteps;
	}

	public void PushAssessDifficulty ()
	{
		Camera.main.GetComponent<GameUI> ().UpdateSteps (AssessDifficulty ());
	}

	#endregion


	#region powerups

	public void EnablePowerUp (PowerUp powerUp)
	{
		switch (powerUp) {
		case PowerUp.slow:
			{
				boost = 0.5f;
				boostLifetime = 5;
				break;	
			}
		case PowerUp.fast:
			{
				boost = 1.6f;
				boostLifetime = 5;
				break;	
			}
		case PowerUp.shield:
			{
				SetShield (true);
				break;	
			}
		case PowerUp.gun:
			{
				StartGun ();
				break;	
			}
		}
	}

	public void SetShield (bool enabled)
	{
		shield = enabled;
		shieldObject.SetActive (enabled);
	}

	public void StartGun ()
	{
		gunLifeTimer = 10f;
	}



	#endregion
}
