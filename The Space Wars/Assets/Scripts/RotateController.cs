using UnityEngine;
using System.Collections;

public class RotateController : MonoBehaviour {

	public Vector2 playerPos = new Vector2(0,0);
	public Vector3 addPos = new Vector3(0,0,0);
	float startTime;
	public float rotateSpeed;
	int difficulty;
	public bool playing = true;

	void Start () {
		difficulty = DifficultyController.difficulty;
		//Coroutines are called after the next Update call
		StartCoroutine(movePlayer());	
	}

	void Update () {
		if(playing){
			transform.parent.transform.position += new Vector3(0,0,0.025f + 0.075f * difficulty);
			addPos = transform.parent.transform.position;

			if(Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.D)){ //If any part of WASD is being pressed.
				if(Input.GetKey(KeyCode.A) && !Input.GetKey(KeyCode.D)){
					if(playerPos.x != -1){
						playerPos += new Vector2(-1,0);
					}
				}
				else if(Input.GetKey(KeyCode.D)){ //A and D cannot be pressed at the same time.
					if(playerPos.x != 1){
						playerPos += new Vector2(1,0);
					}
				}
				if (Input.GetKey(KeyCode.W) && !Input.GetKey(KeyCode.S)) {
					if(playerPos.y != 1){
						playerPos += new Vector2(0,1);
					}
				}
				else if(Input.GetKey(KeyCode.S)){ //S and W cannot be pressed at the same time.
					if(playerPos.y != -1){
						playerPos -= new Vector2(0,1);
					}
				}
			}
			else if(playerPos != new Vector2(0,0) + (Vector2)addPos){ //If no part of wASD is being pressed and the player isn't at center.
				playerPos = new Vector2(0,0);
			}
			if(Input.GetKeyUp(KeyCode.W) || Input.GetKeyUp(KeyCode.A) || Input.GetKeyUp(KeyCode.S) || Input.GetKeyUp(KeyCode.D)){
				if(Input.GetKeyUp(KeyCode.W)){
					if(playerPos.y == 1){
						playerPos -= new Vector2(0,1);
					}
				}
				if(Input.GetKeyUp(KeyCode.A)){
					if(playerPos.x == -1){
						playerPos += new Vector2(1,0);
					}				
				}
				if(Input.GetKeyUp(KeyCode.S)){
					if(playerPos.y == -1){
						playerPos += new Vector2(0,1);
					}				
				}
				if(Input.GetKeyUp(KeyCode.D)){
					if(playerPos.x == 1){
						playerPos -= new Vector2(1,0);
					}				
				}
			}
		}
	}

	IEnumerator movePlayer(){ //This smoothly moves the player, regardless of current position and destination.
		while(true){

			//The following two sections will set eulerY and eulerZ and then Lerp to the designated angle, giving the illusion of accurate flight.
			float eulerZ;
			float eulerY;

			//This section modifies the roll.
			if(transform.position.x < ((Vector3)playerPos+addPos).x && Vector3.Distance(transform.eulerAngles, new Vector3(0,0,60)) > 1){
				eulerY = 120;
			}
			else if(transform.position.x > ((Vector3)playerPos+addPos).x && Vector3.Distance(transform.eulerAngles, new Vector3(0,0,120)) > 1){
				eulerY = 60;
			}
			else{
				eulerY = 90;
			}

			//This section modifies the pitch.
			if(transform.position.y < ((Vector3)playerPos+addPos).y && Vector3.Distance(transform.eulerAngles, new Vector3(60,0,0)) > 1){
				eulerZ = 60;
			}
			else if(transform.position.y > ((Vector3)playerPos+addPos).y && Vector3.Distance(transform.eulerAngles, new Vector3(120,0,0)) > 1){
				eulerZ = 120;
			}
			else{
				eulerZ = 90;
			}

			transform.localEulerAngles = Vector3.Lerp(transform.rotation.eulerAngles, new Vector3(0,eulerY,eulerZ), Time.deltaTime * rotateSpeed);

			//This section will move the player if they aren't in the right place.
			if((Vector2)transform.position != playerPos + (Vector2)addPos){
				float journeyLength = Vector2.Distance((Vector2)transform.position, playerPos + (Vector2)addPos);
				float distCovered = (Time.time - startTime);
				float fracJourney = distCovered / journeyLength;
				//float t = fracJourney;
				//Smootherp
				//t = t*t * (3f - 2f*t);
				//Smoothererp
				//t = t*t*t * (t * (6f*t - 15f) + 10f);				
				//Sinerp
				//t = Mathf.Sin(t * Mathf.PI * 0.5f);
				//Coserp
				//t = 1f - Mathf.Cos(t * Mathf.PI * 0.5f);
				//Experp
				//t = t*t;
				transform.position = Vector3.Lerp(transform.position, new Vector3(playerPos.x + addPos.x, playerPos.y + addPos.y, addPos.z + 5), fracJourney);
				//transform.position = Vector3.Lerp(transform.position, new Vector3(playerPos.x + addPos.x, playerPos.y + addPos.y, addPos.z + 5), t);
			}
			else{
				startTime = Time.time;
			}
			yield return null;
		}
	}
}
