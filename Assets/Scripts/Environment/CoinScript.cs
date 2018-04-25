using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinScript : MonoBehaviour
{
	public PowerUp coinType = PowerUp.none;
	public bool isCoinDummy = false;
	public float dummyFlySpeed = 0.05f;
	public float dummyFlyMaxSpeed = 0.4f;

	// Use this for initialization
	void Awake ()
	{
		
	}

	void Start ()
	{
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (isCoinDummy) {
			//Debug.Log (Camera.main.GetComponent<GameUI> ().coinsTextView.transform.position);

			Vector3 coinsTextViewPos = Camera.main.GetComponent<GameUI> ().coinsTextView.rectTransform.position;
			Vector3 coinTextWorld = new Vector3 (coinsTextViewPos.x, coinsTextViewPos.y - 50, Camera.main.transform.position.z - GameEngine.rocketMan.transform.position.z);
			Vector3 destination = Camera.main.ScreenToWorldPoint (coinTextWorld);

			Vector3 direction = destination - transform.position;

			if (direction.magnitude > 0.3f) {
				transform.position += direction.normalized * dummyFlySpeed;

				if (dummyFlySpeed < dummyFlyMaxSpeed) {
					dummyFlySpeed += 0.2f * Time.deltaTime;
				}
			} else {
				//when reached
				//UI
				Camera.main.GetComponent<GameUI> ().UpdateCoins ();
				GameObject.Destroy (gameObject);	
			}
		}
	}

	public void OnTriggerEnter (Collider collider)
	{		
		RocketMan playerScript = collider.gameObject.GetComponent<RocketMan> ();
		if (playerScript != null) {
			switch (coinType) {
			case PowerUp.coin:
				{					
					GameEngine.AddCoin ();
					SetCoinDummy ();
					break;
				}
			case PowerUp.gun:
				{
					GameEngine.rocketMan.EnablePowerUp (PowerUp.gun);
					break;
				}
			case PowerUp.shield:
				{
					GameEngine.rocketMan.EnablePowerUp (PowerUp.shield);
					break;
				}
			case PowerUp.slow:
				{
					GameEngine.rocketMan.EnablePowerUp (PowerUp.slow);
					break;
				}

			case PowerUp.fast:
				{
					GameEngine.rocketMan.EnablePowerUp (PowerUp.fast);
					break;
				}
			}

		}
	}

	public void SetCoinDummy ()
	{
		transform.SetParent (Camera.main.transform, true);
		isCoinDummy = true;

	}
}
