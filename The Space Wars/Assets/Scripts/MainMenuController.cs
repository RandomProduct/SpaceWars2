using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MainMenuController : MonoBehaviour {

	public GameObject MainMenu;
	public GameObject DifficultySelection;
	public GameObject Credits;
	public GameObject HighScores;
	public GameObject Controls;

	public void Start(){
		if(this.tag == "MainCamera"){
			this.GetComponent<Rigidbody>().angularVelocity = new Vector3(0,0.1f,0);
		}
	}

	//Go from difficulty selection back to Main Menu.
	public void backToMainMenu(){
		Credits.SetActive(false);
		DifficultySelection.SetActive(false);
		HighScores.SetActive(false);
		Controls.SetActive(false);
		MainMenu.SetActive(true);
	}

	//Go from Main Menu to difficulty selection.
	public void chooseDifficulty(){
		DifficultySelection.SetActive(true);
		MainMenu.SetActive(false);
	}

	//Go from Main Menu to the credits.
	public void goToCredits(){
		Credits.SetActive(true);
		MainMenu.SetActive(false);
	}

	public void highScores(){
		HighScores.SetActive(true);
		MainMenu.SetActive(false);
		GameObject.Find("HighscoreMaster").GetComponent<HighscoreMaster>().showHighScores(HighScores.transform.GetChild(0).GetComponent<Text>());
	}

	//Set the difficulty based on player's choice and load the game.
	public void startGame(int difficulty){
		DifficultyController.difficulty = difficulty;
		Application.LoadLevel(2);
	}

	public void seeControls(){
		Controls.SetActive(true);
		MainMenu.SetActive(false);
	}

	public void Quit(){
		Application.Quit();
		if(true){
			print("This doesn't work in the editor!");
		}
	}
}
