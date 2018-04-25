using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class HomeMenu : MultipleButtonsMenu
{
	string[] buttonTitles = { "Start", "Shop", "Settings", "Help" };
	public float preferredButtonHeight;
	public float preferredButtonWidth;
	public float padding;
	public float spacing;
	public int fontSize;

	public RuntimeAnimatorController homeMenuAnimationController;

	// Use this for initialization
	void Start ()
	{
			
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}

	public override void Init ()
	{
		animator.runtimeAnimatorController = homeMenuAnimationController;
		animator.SetBool ("HasExited", false);

	}

	public override int NumberOfButtons ()
	{
		return buttonTitles.Length;
	}

	public override string TitleForButtonAtIndex (int index)
	{
		return buttonTitles [index];
	}


	public override void DidSelectButtonAtIndex (int index)
	{
		
		//animator.Play ("ToExit");
		//animator.SetBool ("ToExit", true);

		switch (index) {
		case 0:
			{
				SceneManager.LoadScene ("GameScene");
				break;
			}
		}

	}

	public override Vector2 MenuSize ()
	{
		float height = buttonTitles.Length * preferredButtonHeight + (buttonTitles.Length - 1) * SpaceBetweenButtons ();
		return new Vector2 (preferredButtonWidth, height);
	}

	public override float Padding ()
	{
		return padding;
	}

	public override float SpaceBetweenButtons ()
	{
		return spacing;
	}

	public override int FontSize ()
	{
		return fontSize;
	}

}
