using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletScript : MonoBehaviour
{

	public float lifetime = 1f;
	public float speed = 30f;
	// Use this for initialization
	void Start ()
	{
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		lifetime -= Time.deltaTime;

		transform.position -= new Vector3 (0, 0, speed) * Time.deltaTime;

		if (lifetime <= 0) {
			GameObject.Destroy (gameObject);
		}
	}
}
