using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public abstract class MultipleButtonsMenu : MonoBehaviour
{
	public GameObject buttonPrefab;
	public Animator animator;
	GameObject menuGroup;

	public enum ButtonsLayoutMode
	{
		Vertical,
		Horizontal
	}

	public ButtonsLayoutMode mode = ButtonsLayoutMode.Vertical;

	void Awake ()
	{
		BuildMenu ();	
		Init ();
	}


	// Use this for initialization
	void Start ()
	{
		
	}


	void BuildMenu ()
	{
		//menu group spawn
		menuGroup = GameObject.Instantiate (new GameObject (), this.transform);
		menuGroup.name = "MenuGroupObject";
		animator = menuGroup.AddComponent<Animator> ();
		HorizontalOrVerticalLayoutGroup layoutGroup;

		//data source
		int noOfButtons = NumberOfButtons ();
		int fontSize = FontSize ();
		Vector2 sizeForMenuGroup = new Vector2 (Screen.width - Padding () * 2, MenuSize ().y);

		//set layout group
		if (mode == ButtonsLayoutMode.Vertical) {
			layoutGroup = menuGroup.AddComponent<VerticalLayoutGroup> ();
		} else {
			layoutGroup = menuGroup.AddComponent<HorizontalLayoutGroup> ();
		}

		//layout group appearance
		layoutGroup.spacing = SpaceBetweenButtons ();
		RectTransform menuGroupRectTransform = layoutGroup.GetComponent<RectTransform> ();
		menuGroupRectTransform.SetSizeWithCurrentAnchors (RectTransform.Axis.Horizontal, sizeForMenuGroup.x);
		menuGroupRectTransform.SetSizeWithCurrentAnchors (RectTransform.Axis.Vertical, sizeForMenuGroup.y);

		for (int i = 0; i < noOfButtons; i++) {
			int index = i;

			//Init Button (components and instantiation)
			GameObject buttonGO = GameObject.Instantiate (buttonPrefab, menuGroup.transform);
			Button button = buttonGO.GetComponent<Button> ();

			//button text
			Text buttonText = buttonGO.GetComponentInChildren<Text> ();
			buttonText.text = TitleForButtonAtIndex (index);
			buttonText.fontSize = fontSize;

			//event
			button.onClick.AddListener (delegate {
				DidSelectButtonAtIndex (index);
			});

			//appearance
		}			


	}

	public abstract int NumberOfButtons ();

	public abstract string TitleForButtonAtIndex (int index);

	public abstract void DidSelectButtonAtIndex (int index);

	public abstract Vector2 MenuSize ();

	public abstract float Padding ();

	public abstract float SpaceBetweenButtons ();

	public virtual void Init ()
	{
		
	}

	public virtual int FontSize ()
	{
		return 14;
	}

}
