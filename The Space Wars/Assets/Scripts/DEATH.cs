using UnityEngine;
using System.Collections;

public class DEATH : MonoBehaviour {
	public GameObject explosion;

	// Use this for initialization
	void Start () {
		StartCoroutine (waitForDeath ());
	}
	IEnumerator waitForDeath(){
		Instantiate (explosion, transform.position, transform.rotation);
		yield return new WaitForSeconds (4);
		GameObject.Find("HighscoreMaster").GetComponent<HighscoreMaster>().newHigh((int)PlayerController.totalPoints);
	}
	// Update is called once per frame
	void Update () {
	
	}
}
