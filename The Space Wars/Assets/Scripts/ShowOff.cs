using UnityEngine;
using System.Collections;

public class ShowOff : MonoBehaviour {

	// Use this for initialization
	void Start () {
		StartCoroutine (Spin());
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	IEnumerator Spin(){
		yield return new WaitForSeconds (12);
		Application.LoadLevel(3);
	}
}
