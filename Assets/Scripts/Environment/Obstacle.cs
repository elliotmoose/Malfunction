using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Obstacle : MonoBehaviour
{


	public bool isActive = true;
	public GameObject coinObject;
	public int globalRowIndex = 0;
	public int column = -1;
	public Color originalColor = Color.white;

	//powerup objects
	static Object coin;
	static Object speedUp;
	static Object slowDown;
	static Object gun;
	static Object shield;



	// Use this for initialization

	void Awake ()
	{
		if (Obstacle.coin == null) {
			Obstacle.coin = Resources.Load ("Prefabs/coin");
			Obstacle.speedUp = Resources.Load ("Prefabs/coinUp");
			Obstacle.slowDown = Resources.Load ("Prefabs/coinDown");
			Obstacle.gun = Resources.Load ("Prefabs/gun");
			Obstacle.shield = Resources.Load ("Prefabs/shield");
		}			
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}

	public void SetInactive ()
	{
		isActive = false;
		GetComponent<MeshRenderer> ().enabled = false;
	}

	public void OnTriggerExit (Collider collider)
	{
		RocketMan player = collider.gameObject.GetComponent<RocketMan> ();
		if (player != null) {
			if (!isActive) { 
				//+ point
				GameEngine.AddPoint ();
				GameEngine.currentWave++;
				ObstacleSpawner.lastEntry = new Vector2 (column, globalRowIndex - 6);

				//test mode
				collider.gameObject.GetComponent<RocketMan> ().PushAssessDifficulty ();
			} else {
				if (player.shield) {
					player.SetShield (false);
				}
			}
		}

	}

	public void OnTriggerEnter (Collider collider)
	{
		RocketMan player = collider.gameObject.GetComponent<RocketMan> ();
		if (player != null) {
			if (isActive) {

				if (!player.shield) {
					player.Die ();

					//end game
					GameEngine.EndGame ();
				}

			}		
		}

		BulletScript bullet = collider.gameObject.GetComponent<BulletScript> ();
		if (bullet != null) {
			SetInactive ();
		}

	}

	public void SetPowerUp (PowerUp powerUp)
	{
		if (coinObject != null) {
			GameObject.Destroy (coinObject);
		}

		SetInactive ();


		switch (powerUp) {
		case PowerUp.coin:
			{				
				coinObject = (GameObject)GameObject.Instantiate (coin, transform);
				break;
			}
		case PowerUp.gun:
			{
				coinObject = (GameObject)GameObject.Instantiate (gun, transform);
				break;
			}
		case PowerUp.shield:
			{
				coinObject = (GameObject)GameObject.Instantiate (shield, transform);
				break;
			}
		case PowerUp.slow:
			{
				coinObject = (GameObject)GameObject.Instantiate (slowDown, transform);
				break;
			}

		case PowerUp.fast:
			{
				coinObject = (GameObject)GameObject.Instantiate (speedUp, transform);
				break;
			}
		}
			
		if (coinObject != null) {
			CoinScript coinScript = coinObject.GetComponent<CoinScript> ();
			coinScript.coinType = powerUp;
		}
	}

	public IEnumerator FadeTo (float value, float time)
	{
		Renderer thisRenderer = transform.GetComponent<Renderer> ();
		float alpha = thisRenderer.material.color.a;
		Color currentColor = thisRenderer.material.color;

		for (float t = 0.0f; t < 1.0f; t += Time.deltaTime / time) {
			Color color = new Color (currentColor.r, currentColor.g, currentColor.b, Mathf.Lerp (alpha, value, t));
			thisRenderer.material.color = color;

			yield return null;	
		}			

	}

	public void SetAlpha (float value)
	{
		Renderer thisRenderer = transform.GetComponent<Renderer> ();
		Color currentColor = thisRenderer.material.color;
		Color color = new Color (currentColor.r, currentColor.g, currentColor.b, value);
		thisRenderer.material.color = color;
	

	}

	public void UpdateAlpha ()
	{
		Renderer renderer = GetComponent<Renderer> ();

		if (globalRowIndex == 6 || globalRowIndex == 7 || globalRowIndex == 8) {
			renderer.material.color = originalColor;
			return;
		} else {
			float r = Mathf.Max (originalColor.r, 0.5f);
			float g = Mathf.Max (originalColor.g, 0.5f);
			float b = Mathf.Max (originalColor.b, 0.5f);

			float x = globalRowIndex - Mathf.Floor (ObstacleGroup.numberOfLayers * 3 / 2);
			float coeff = -0.02f;
			float offset = 1f;
			float finalCoeff = 0.3f;

			float alpha = finalCoeff * (coeff * (x * x) + offset);
			renderer.material.color = new Color (r, g, b, alpha);
		}

	}
}

public enum PowerUp
{
	none,
	coin,
	shield,
	gun,
	slow,
	fast
}