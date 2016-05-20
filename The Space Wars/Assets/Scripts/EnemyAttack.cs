using UnityEngine;
using System.Collections;


public class EnemyAttack : MonoBehaviour
{
	public float timeBetweenAttacks;     // The time in seconds between each attack.
	public int attackDamage;               // The amount of health taken away per attack.
	//public GameObject playerObject;

	//Animator anim;                              // Reference to the animator component.
	public GameObject player;                          // Reference to the player GameObject.
	public Transform playerTransform;
	PlayerHealth playerHealth;                  // Reference to the player's health.
	//EnemyHealth enemyHealth;                    // Reference to this enemy's health.
	//bool playerInRange;                         // Whether player is within the trigger collider and can be attacked.
	float timer;                                // Timer for counting up to the next attack.

	public float range = 50.0f;
	public float bulletImpulse = 20.0f;
	private bool onRange = false;

	public Rigidbody projectile;

	public GameObject explosion;

	public int turretHealth;
	void Awake ()
	{
		timeBetweenAttacks = Random.Range(3.5f, 4.5f) - DifficultyController.difficulty; //Easy: 0.83, Medium: 0.67, Hard: 0.5. Lower number, higher shot rate.
		// Setting up the references.
		player = GameObject.FindGameObjectWithTag ("Player");
		if(player == null){ //If the player is dead
			this.enabled = false;
		}
		else{
			playerTransform = player.transform;
			playerHealth = player.GetComponent <PlayerHealth> ();
			//enemyHealth = GetComponent<EnemyHealth>();
			//anim = GetComponent <Animator> ();
			//float rand = Random.Range(1.0f,2.0f);
			InvokeRepeating ("Shoot", 2, timeBetweenAttacks);
		}
	}

	void Shoot(){
		if(onRange && (player != null)){
			Rigidbody bullet = (Rigidbody)Instantiate(projectile, transform.position + transform.forward, transform.rotation);
			bullet.AddForce(transform.forward*bulletImpulse, ForceMode.Impulse);

			Destroy(bullet.gameObject,2);
		}
	}


	/*void OnTriggerEnter (Collider other)
	{
		print ("collision");
		// If the entering collider is the player...
		if(other.gameObject == player)
		{
			// ... the player is in range.
			playerInRange = true;
		}
	}


	void OnTriggerExit (Collider other)
	{
		// If the exiting collider is the player...
		if(other.gameObject == player)
		{
			// ... the player is no longer in range.
			playerInRange = false;
		}
	}*/


	void Update ()
	{

		if(player == null){
			this.enabled = false;
		}
		else{
			if(transform.position.z <= player.transform.position.z){
				Destroy(this);
			}

			if (player != null) {
				//this.GetComponent<Rigidbody> ().AddForce ((player.transform.position - transform.position) * 20 * Time.smoothDeltaTime);
		
				onRange = Vector3.Distance (transform.position, playerTransform.position) < range;
				if (onRange) {
					transform.LookAt (playerTransform);
				}
			}
			// Add the time since Update was last called to the timer.
			timer += Time.deltaTime;

			// If the timer exceeds the time between attacks, the player is in range and this enemy is alive...
			/*if(timer >= timeBetweenAttacks && playerInRange /*&& enemyHealth.currentHealth > 0*///)sss
			/*{
				// ... attack.
				Attack ();
			}*/

			// If the player has zero or less health...
			if(playerHealth.currentHealth <= 0)
			{
				// ... tell the animator the player is dead.
				//anim.SetTrigger ("PlayerDead");
			}
		}
	}


	void Attack ()
	{
		// Reset the timer.
		timer = 0f;
		//print(playerHealth.currentHealth);
		// If the player has health to lose...
		if(playerHealth.currentHealth > 0)
		{
			// ... damage the player.
			//playerHealth.TakeDamage (attackDamage);
		}
	}
}
