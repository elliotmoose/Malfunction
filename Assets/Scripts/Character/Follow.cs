using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Follow : MonoBehaviour
{

	public GameObject target;
	// Use this for initialization
	void Start ()
	{
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (target != null) {
			transform.position = target.transform.position;
		} else {
			Debug.Log ("ERROR NO TARGET");
		}
	}
}
