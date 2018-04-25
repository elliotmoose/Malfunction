using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameUI : MonoBehaviour
{
	public Button playButton;
	public Button pauseButton;
	public Button resumeButton;
	public Text scoreTextView;
	public Text highscoreTextView;
	public Text coinsTextView;
	public Text stepsToTakeTextView;

	// Use this for initialization
	void Start ()
	{
		playButton.onClick.AddListener (PlayButtonPressed);
		pauseButton.onClick.AddListener (PauseButtonPressed);
		resumeButton.onClick.AddListener (ResumeButtonPressed);
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}

	public void UpdateCoins ()
	{
		coinsTextView.text = User.coins.ToString ();	
	}

	public void UpdateHighscore ()
	{
		highscoreTextView.text = "TOP: " + User.highscore.ToString ();	
	}

	public void UpdateScore (int score)
	{
		scoreTextView.text = score.ToString ();
	}

	public void UpdateSteps (int steps)
	{
		stepsToTakeTextView.text = steps.ToString ();
	}




	public void SetUIGameState (bool enabled)
	{
		playButton.gameObject.SetActive (!enabled);
		pauseButton.gameObject.SetActive (enabled);
		highscoreTextView.gameObject.SetActive (!enabled);
	}




	private void PlayButtonPressed ()
	{
		if (!GameEngine.gameInProgress) {
			GameEngine.StartGame ();

			pauseButton.gameObject.SetActive (true);
		}
	}

	private void PauseButtonPressed ()
	{
		resumeButton.gameObject.SetActive (true);
		pauseButton.gameObject.SetActive (false);
		GameEngine.PauseGame ();
	}

	private void ResumeButtonPressed ()
	{
		resumeButton.gameObject.SetActive (false);	
		pauseButton.gameObject.SetActive (true);
		GameEngine.ResumeGame ();
	}
}
