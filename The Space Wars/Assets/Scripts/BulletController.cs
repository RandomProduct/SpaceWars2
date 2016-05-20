using UnityEngine;
using System.Collections;

public class BulletController : MonoBehaviour {
	public GameObject explosion;


	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}
	void OnTriggerEnter(Collider col){

		//Instantiate(explosion, transform.position, transform.rotation);
		//print ("Collision");
		if(col.tag == "Turret"){
			if (this.tag == "PlayerBulletSmall") {

				if (col.transform.parent.GetComponent<EnemyAttack> ().turretHealth > 1) {
					(col.transform.parent.GetComponent<EnemyAttack> ().turretHealth)--;
					print ("turret health" + col.transform.parent.GetComponent<EnemyAttack> ().turretHealth);
				} else {
					col.GetComponent<Rigidbody>().AddForce(new Vector3(Random.Range(-2,2),Random.Range(-2,2),9));
					col.GetComponent<Rigidbody>().AddTorque(new Vector3(Random.Range(0,100), Random.Range(0, 100), Random.Range(0, 100)));
					ParticleSystem ps = col.gameObject.transform.parent.GetComponent<ParticleSystem>(); //Play that explosion, yo
					ps.Play();
					GoBoom ();
					//GameObject explode = (GameObject)Instantiate(explosion, col.transform.position, col.transform.rotation);
					col.GetComponent<TurretWallHandler>().enabled = true;
					col.GetComponent<BoxCollider>().enabled = false;
					PlayerController.totalPoints += 100 * DifficultyController.difficulty;
					Destroy (col.transform.parent.gameObject);
				}

			} else if (this.tag == "PlayerBullet") {
				col.GetComponent<Rigidbody>().AddForce(new Vector3(Random.Range(-2,2),Random.Range(-2,2),9));
				col.GetComponent<Rigidbody>().AddTorque(new Vector3(Random.Range(0,100), Random.Range(0, 100), Random.Range(0, 100)));
				ParticleSystem ps = col.gameObject.transform.parent.GetComponent<ParticleSystem>(); //Play that explosion, yo
				ps.Play();
				GoBoom ();
				//GameObject explode = (GameObject)Instantiate(explosion, col.transform.position, col.transform.rotation);
				col.GetComponent<TurretWallHandler>().enabled = true;
				col.GetComponent<BoxCollider>().enabled = false;
				PlayerController.totalPoints += 100 * DifficultyController.difficulty;
				Destroy (col.transform.parent.gameObject);
			}
			//col.transform.parent.gameObject.active = false;
			//print (explode.name);
		}
	}
	void GoBoom(){
		Instantiate(explosion, transform.position, transform.rotation);
	}
}
