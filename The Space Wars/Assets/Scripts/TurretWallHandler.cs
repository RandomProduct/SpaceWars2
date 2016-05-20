using UnityEngine;
using System.Collections;

public class TurretWallHandler : MonoBehaviour {

	public GameObject explosion;
	private bool exploded = false;

	void Update(){
		if(!exploded){
			if(transform.position.y < 5 && (transform.position.x < -2.75f || transform.position.x > 3)){
				Instantiate(explosion, transform.position, transform.rotation);
				exploded = true;
			}
			else if(transform.position.y < 0){
				Instantiate(explosion, transform.position, transform.rotation);
				exploded = true;
			}
		}
	}
}
