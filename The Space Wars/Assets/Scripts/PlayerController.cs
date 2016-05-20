using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour {
	
	private bool TurretsOut = true;
	private Animator anime;
	public static float totalPoints = 0; //Unsigned int will allow it to go much bigger than we actually need. I just wanted to use an unsigned int.
	bool readyToShoot = true;
	public Text text;
	string zeros = "000000";
	static int difficulty;
	public float bulletImpulse;
	public GameObject playerBullet;
	public GameObject playerBulletSmall;

	bool bigGun = true;
	bool smallGun = false;

	int timer = 0;
	int totalTime;

	void Awake(){
		difficulty = DifficultyController.difficulty;
		anime = GetComponent<Animator> ();
		totalTime = 45 + 15 * difficulty;
		StartCoroutine(countdown());
	}

	IEnumerator countdown(){
		while(timer < totalTime){
			yield return new WaitForSeconds(1);
			timer++;
			//print(timer);
		}
		//print("Finale...");
		GetComponent<FinaleHandler>().enabled = true;
	}

	void FixedUpdate(){
		/*if(Input.GetKey(KeyCode.I)){
			totalPoints += 1000000;
		}*/
		totalPoints += 0.025f + 0.075f * difficulty; //This increases at the same rate as the ship's movement. Higher difficulty, more speed, more points.
		if(totalPoints > 9999999){
			totalPoints = 9999999; //This should be literally impossible.
		}
		if(totalPoints >= 1000000){
			zeros = "";
		}
		else if(totalPoints >= 100000){
			zeros = "0";
		}
		else if(totalPoints >= 10000){
			zeros = "00";
		}
		else if(totalPoints >= 1000){
			zeros = "000";
		}
		else if(totalPoints >= 100){
			zeros = "0000";
		}
		else if(totalPoints >= 10){
			zeros = "00000";
		}
		else{
			zeros = "000000";
		}
		text.text = "Score: " + zeros + (int)totalPoints;
	}

	void Update(){
		//print(totalPoints);
		if(Input.GetMouseButton(0)){
			anime.SetBool ("Shooting", true);
			if (readyToShoot) {
				StartCoroutine (waitToShoot ());
				Shoot ();
			}
			//print("pew!");
		}
		else if(Input.GetMouseButtonUp(0)){
			anime.SetBool ("Shooting", false);
			//print("nothing");
		}
		else if(Input.GetMouseButtonDown(1)){
			if(TurretsOut == false){
				anime.SetTrigger ("TurretsOut"); //big guns are in front
				TurretsOut = true;
				bigGun = true;
				smallGun = false;
			}else if(TurretsOut == true){
				
				anime.SetTrigger ("TurretsIn");  //big guns go back & little ones come out
				TurretsOut = false;
				bigGun = false;
				smallGun = true;
			}
		}
	}
	void Shoot(){
		if (bigGun == true) {
			GameObject bullet = (GameObject)Instantiate(playerBullet, transform.position + (transform.forward*2), transform.rotation);
			bullet.GetComponent<Rigidbody>().velocity=transform.forward*bulletImpulse;
			Destroy(bullet.gameObject,2);
		} else if (smallGun == true) {
			GameObject bullet = (GameObject)Instantiate(playerBulletSmall, transform.position + (transform.forward*2), transform.rotation);
			bullet.GetComponent<Rigidbody>().velocity=transform.forward*bulletImpulse*2;
			Destroy(bullet.gameObject,.5f);
		}
	}

	IEnumerator waitToShoot(){
		readyToShoot = false;
		if (bigGun) {
			yield return new WaitForSeconds (.8f);
		} else {
			yield return new WaitForSeconds(.1f);
		}
		yield return new WaitForSeconds(.25f);
		readyToShoot = true;
	}

	void OnTriggerEnter(Collider col){
		if(col.tag == "Turret"){
			col.GetComponent<Rigidbody>().AddForce(new Vector3(Random.Range(-2,2),Random.Range(-2,2),9));
			col.GetComponent<Rigidbody>().AddTorque(new Vector3(Random.Range(0,100), Random.Range(0, 100), Random.Range(0, 100)));
			ParticleSystem ps = col.gameObject.transform.parent.GetComponent<ParticleSystem>(); //Play that explosion, yo
			ps.Play();
			col.GetComponent<TurretWallHandler>().enabled = true;
			col.GetComponent<BoxCollider>().enabled = false;
			totalPoints += 75 * difficulty;
			GetComponent<PlayerHealth>().TakeDamage(1);
		}
	}
}
