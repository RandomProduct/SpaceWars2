using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class wallController : MonoBehaviour {

	public Transform walls;
	public int target;
	public List<GameObject> wallPrefabs = new List<GameObject>();
	public List<GameObject> wallTemps = new List<GameObject>();
	public Transform wallMaster;
	public GameObject finale;
	bool notDone = true;

	int newWallPos = 0;

	// Use this for initialization
	void Start () {
		for(int i = 0; i < 13; i++){
			GameObject newWall = (GameObject)Instantiate(wallPrefabs[Random.Range(0, wallPrefabs.Count)], new Vector3(0,0,16*newWallPos), new Quaternion(0,0,0,0)); //Create a new wall going down the hall.
			wallTemps.Add(newWall); //Add it to the List so we can mess with it later.
			newWall.transform.parent = wallMaster; //Add it to the Master so we don't make a cluttered hierarchy.
			newWallPos++;
			if(i < 1 + DifficultyController.difficulty){ //Higher the difficulty, the faster we're going, so it takes longer for the first turrets to appear.
				newWall.GetComponent<EnemyPlacementController>().chanceSpawn = 0;
			}
		}
	}

	void FixedUpdate(){

	}

	// Update is called once per frame
	void Update () {
		if(notDone && transform.position.z >= target){
			target += 16;
			GameObject temp = wallTemps[0].gameObject;
			wallTemps.RemoveAt(0);
			GameObject newWall = (GameObject)Instantiate(wallPrefabs[Random.Range(0, wallPrefabs.Count)], new Vector3(0,0,16*newWallPos), new Quaternion(0,0,0,0)); //Create a new wall going down the hall.
			newWallPos++;
			Destroy(temp);
			wallTemps.Add(newWall);
			newWall.transform.parent = wallMaster;
		}
	}

	public GameObject spawnFinale(){
		notDone = false;
		target += 16;
		GameObject newWall = (GameObject)Instantiate(finale, new Vector3(0,0,16*newWallPos), new Quaternion(0,0,0,0)); //Create a new wall going down the hall.
		newWallPos++;
		wallTemps.Add(newWall);
		newWall.transform.parent = wallMaster;
		return newWall;
	}
}
