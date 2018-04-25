using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class User : MonoBehaviour
{

	public static int coins = 0;
	public static int highscore = 0;


	// Use this for initialization
	void Awake ()
	{
		//link scripts
		User.LoadPersistentData ();

		var ui = Camera.main.GetComponent<GameUI> ();
		ui.UpdateCoins ();
		ui.UpdateHighscore ();
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}


	public static void LoadPersistentData ()
	{		
		highscore = PlayerPrefs.GetInt ("highscore");
		coins = PlayerPrefs.GetInt ("coins");
	}

	public static void SaveCoins ()
	{
		PlayerPrefs.SetInt ("coins", coins);
	}

	public static void NewHighscore (int points)
	{
		highscore = points;
		PlayerPrefs.SetInt ("highscore", highscore);

		Camera.main.GetComponent<GameUI> ().UpdateHighscore ();
	}
}
