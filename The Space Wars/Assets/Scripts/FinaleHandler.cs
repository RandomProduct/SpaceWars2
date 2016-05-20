using UnityEngine;
using System.Collections;
using System.Linq;

public class FinaleHandler : MonoBehaviour {

	GameObject finalWall;
	bool finishing = false;
	Transform explosions;

	//This only happens when you've beaten the game.
	void Start () {
		finalWall = Camera.main.GetComponent<wallController>().spawnFinale();
	}

	void Update(){
		if(!finishing && Vector3.Distance(transform.position, finalWall.transform.position) < 5){
			Victory();
		}
	}

	void Victory(){
		GetComponent<PlayerController>().enabled = false;
		RotateController rc = transform.parent.GetComponent<RotateController>();
		rc.playing = false;
		rc.playerPos = new Vector2(5,10);
		rc.addPos = new Vector3(rc.addPos.x, rc.addPos.y, rc.addPos.z + 10);
		finishing = true;
		StartCoroutine(wait());

		/*explosions = finalWall.transform.GetChild(2);
		Component[] particles = explosions.gameObject.GetComponentsInChildren<ParticleSystem>();
		print(particles.Length);
		foreach (Transform child in explosions) 
		{
			print("playing");
			child.GetComponent<ParticleSystem>().Play();
		}*/
	}

	IEnumerator wait(){
		yield return new WaitForSeconds(1);
		GameObject.Find("HighscoreMaster").GetComponent<HighscoreMaster>().newHigh((int)PlayerController.totalPoints);
	}
}
