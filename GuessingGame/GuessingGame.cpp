#include <iostream>
#include <ctime>
#include <cstdlib>


#include <vector>
#include <sstream>

using namespace std;

void Game() {

	int value;
	int guess;
	int timesGuessed = 1;
	srand((int)time(0));
	value = (rand() % 10);

	cout << "Guess my secret number. It is between 0 and 9" << endl;

	cin >> guess;

	while (guess >= 10 || guess <= 0) {
		cout << "Input not accepted. Guess a number between 0 and 9" << endl;
		cin >> guess;
	}

	while (guess != value)
	{
		cout << "wrong, guess again. Times guessed: " << timesGuessed << endl << endl;
		timesGuessed++;
		cin >> guess;
	}
	cout << "correct answer!" << endl;
	cout << "times guessed " << timesGuessed << endl << endl;
	

	int restart = -1;
	cout << "would you like to play again? Type 1 for yes, 2 for no." << endl;
	cin >> restart;
	if (restart == 1) {
		cout << endl;
		restart = -1;
		Game();
	}
	else if (restart == 2) {
		cout << "Thx for playing!" << endl;
	}
}

void Game2() {

	int value;
	int guessValue;
	string input;
	int timesGuessed = 1;
	srand((int)time(0));
	value = (rand() % 9) +1;

	cout << "Guess my secret number. It is between 1 and 9" << endl;

	cin >> input;
	istringstream iss(input);
	iss >> guessValue;		

	while (guessValue != value)
	{
		if (guessValue >= 10 || guessValue <= 0) {

			cout << "Input not accepted. Guess a number between 1 and 9" << endl << endl;			
		}
		else {
			cout << "wrong, guess again. Times guessed: " << timesGuessed << endl << endl;
			timesGuessed++;			
		}	
		cin >> input;
		istringstream iss(input);
		iss >> guessValue;
	}

	cout << "correct answer!" << endl;
	cout << "times guessed " << timesGuessed << endl << endl;

	int restart = -1;
	cout << "would you like to play again? Type y for yes, anykey for no." << endl;
	cin >> restart;
	if (restart == 1) {
		cout << endl;
		restart = -1;
		Game2();
	}
	else {
		cout << "Thx for playing!" << endl;
	}
}