using UnityEngine;
using System.Collections;

public class ExplosionHandler : MonoBehaviour {

	private bool readyToDie = false;

	/*// Use this for initialization
	void Start () {
		StartCoroutine(Countdown());
	}
	
	// Update is called once per frame
	IEnumerator Countdown () {
		yield return new WaitForSeconds(1);
		Destroy(this.gameObject);
	}*/

	void Update(){
		if(readyToDie && GetComponent<ParticleSystem>().particleCount == 0){
			Destroy(this.gameObject);
		}
		readyToDie = true;
	}
}
