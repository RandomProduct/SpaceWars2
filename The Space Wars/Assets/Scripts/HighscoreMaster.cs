using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class HighscoreMaster : MonoBehaviour {

	HighscoreMaster ultimate;
	string[] initials = new string[3];
	int[] scores = new int[3];

	// Use this for initialization
	void Start () {
		if(ultimate != null){ //THERE CAN BE ONLY ONE
			Destroy(this.gameObject);
		}
		else{
			ultimate = this;
			DontDestroyOnLoad(this);
			initials[0] = "SBR";
			initials[1] = "MJR";
			initials[2] = "GOK";
			scores[0] = 5000;
			scores[1] = 3574;
			scores[2] = 1454;
		}
	//	updateHighScore();
	}

	/*public void updateHighScore(){
		StartCoroutine(actuallyUpdateHighScore());
	}

	string[] newScore = {"", "", ""};

	IEnumerator actuallyUpdateHighScore(){
		bool running = true;
		while(running){
			if(newScore[0] == ""){
				newScore[0] = Input.inputString;
			}
			else if(newScore[1] == ""){
				newScore[1] = Input.inputString;
			}
			else if(newScore[2] == ""){

				newScore[2] = Input.inputString;
			}
			else{
				running = false;
			}
			yield return null;
		}
	}*/

	public void newHigh(int highscore){
		if(highscore > scores[0]){
			scores[2] = scores[1];
			scores[1] = scores[0];
			scores[0] = highscore;
			initials[2] = initials[1];
			initials[1] = initials[0];
			initials[0] = "YOU";
		}
		else if(highscore > scores[1]){
			scores[2] = scores[1];
			scores[1] = highscore;
			initials[2] = initials[1];
			initials[1] = "YOU";
		}
		else if(highscore > scores[2]){
			scores[2] = highscore;
			initials[2] = "YOU";
		}
		PlayerController.totalPoints = 0;
		Application.LoadLevel(1);
	}

	public void showHighScores(Text text){
		text.text = "\tHigh Scores:\n1.\t\t" + initials[0] + "\t" + scores[0] + "\n2.\t\t" + initials[1] + "\t\t" + scores[1] + "\n3.\t\t" + initials[2] + "\t\t" + scores[2];
	}
}
