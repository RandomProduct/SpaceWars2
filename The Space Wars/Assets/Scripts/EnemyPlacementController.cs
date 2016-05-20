using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class EnemyPlacementController : MonoBehaviour {

	public Transform placementController;
	public GameObject turret;
	public float chanceSpawn = 0.6f;
	List<Transform> spots = new List<Transform>();
	int difficulty;
	float reduceSpawn;

	// Use this for initialization
	void Start () {

		difficulty = DifficultyController.difficulty;

		reduceSpawn = 0.5f - 0.1f * difficulty; //Higher difficulties, lesser spawn reduction, more turrets.
		foreach (Transform child in placementController){
			spots.Add(child); //These are all the Spot# empty GameObjects.
		}

        for(int i = 0; i < spots.Count; i++){ //Random swapping will add to the randomization of the turret placement.
        	Transform temp = spots[i];
        	int r = Random.Range(0, spots.Count);
        	spots[i] = spots[r];
        	spots[r] = temp;
        }

		foreach (Transform spot in spots){
			if(Random.Range(0.0f, 1.0f) < chanceSpawn){ //This is the chance that a turret is spawned.
				Vector3 transPos = spot.position;
				Quaternion transQua = spot.rotation;
				GameObject newTurret = (GameObject)Instantiate(turret, new Vector3(transPos.x, transPos.y, transPos.z), transQua);
				newTurret.transform.parent = spot;
				chanceSpawn -= reduceSpawn;
			}	
		}
	}
}