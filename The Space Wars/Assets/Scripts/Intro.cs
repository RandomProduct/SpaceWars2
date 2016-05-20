using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Intro : MonoBehaviour {

	public GameObject flashingLight;
	public GameObject spinningLight;
	public GameObject steam;
	public GameObject explosion;
	public GameObject door;
	public GameObject ship;
	public GameObject floor;
	public Text text;
	// Use this for initialization
	void Start () {
		floor.GetComponent<AudioSource> ().enabled = false;
		this.gameObject.GetComponent<Animator> ().enabled = false;
		this.gameObject.GetComponent<AudioSource> ().enabled = false;
		flashingLight.active=false;
		spinningLight.active = false;
		steam.active = false;
		explosion.active = false;
		ship.active = false;
		door.GetComponent<ConstantForce> ().enabled = false;
		StartCoroutine (Introduction());

	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetMouseButton (0)) {
			Application.LoadLevel ("0");
		}
	}
	IEnumerator Introduction(){
		text.text = "Crew Member: \n Approaching The Trench System";
		yield return new WaitForSeconds (4);
		text.text = "Captain: \n Are The 'Not X-Wings' Ready For Launch?";
		yield return new WaitForSeconds (4);
		text.text = "Other Crew Member: \n Captain! We Have Signals On Radar!";
		yield return new WaitForSeconds (4);
		text.text = "Other Other Crew Member: \n They're Coming In Hot!";
		flashingLight.active=true;
		yield return new WaitForSeconds (2);
		floor.GetComponent<AudioSource> ().enabled = true;
		yield return new WaitForSeconds (1);
		this.gameObject.GetComponent<Animator> ().enabled = true;
		text.text = "Captain: \n [BAD WORD]!";
		yield return new WaitForSeconds (2);
		this.gameObject.GetComponent<AudioSource> ().enabled = true;
		yield return new WaitForSeconds (2);
		text.text = "Annoying Intercom Voice: \n  WARNING, WARNING, AIRLOCK MALFUNCTION!";
		steam.active = true;
		yield return new WaitForSeconds (2);
		spinningLight.active = true;
		yield return new WaitForSeconds (5);
		explosion.active = true;
		text.text = "Captain: \n How Did They Spot Us?!";
		door.GetComponent<ConstantForce> ().enabled = true;
		yield return new WaitForSeconds (3);
		text.text = "Captain: \n Wait! What Is Player Doing?!";
		yield return new WaitForSeconds (3);

		text.text = "Player: \n I'm The Hero! I Do What I Want!";
		yield return new WaitForSeconds (5);
		text.text = "Player: \n I'm Reckless! WOOO!";
		ship.active = true;
		yield return new WaitForSeconds (3);
		Application.LoadLevel (1);
	}

}
