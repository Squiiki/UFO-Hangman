/*
 Purpose:     This basic program will allow users to play UFO hangman! Users must guess the passcode in order to save their friend
 Author:      Braeden Corr
 Date:        May 19th, 2022
*/

#include <iostream>
#include <string>
#include <Windows.h>
#include <algorithm>
#include "ufoFunctions.h"

using namespace std;

//Main function
int main()
{
	do 
	{
		SetConsoleTitleA("Alien Guess and Rescue");

		//The codeword
		string codeWord = "CODECADEMY";			//default
		//The answer that will be displayed
		string answer;
		//The amount of missed guesses
		int misses = 0;
		//Correct or not
		bool guess = false;
		//Hold the incorrect guesses
		vector<char> incorrect;
		//The users guess
		string input;
		char letter;
		//Do they continue?
		char yesOrNo;

		//Display the greeting message
		Greet();

		//Chose a codeword
		codeWord = AssignCodeword();

		//Press enter to continue and clear screen after
		system("pause");
		system("cls");

		//Fill the answer variable with '_ ' to create a fill in the blank type look
		for (int i = 0; i < codeWord.length(); i++)
		{
			answer += "_";
		}

		//Game loop, while the answer is incorrect, and the misses are less than 7, continue guessing
		while (answer != codeWord && misses < 7)
		{
			//Show the ASCII art
			DisplayMisses(misses);
			DisplayStatus(answer, incorrect);

			//Ask for their guess
			cout << "Please enter your guess: ";
			cin >> input;
			transform(input.begin(), input.end(), input.begin(), ::toupper);				//Convert to uppercase
			letter = input[0];				//Only accepts the first letter (was having issues with char)

			//Check if the letters match
			for (int i = 0; i < codeWord.length(); i++)
			{
				//If it matches, add it to the answer
				if (letter == codeWord[i])
				{
					answer[i] = letter;
					guess = true;
				}
			}

			//If they got a letter correct
			if (guess)
			{
				cout << "\nNice job! One step closer!\n";
			}
			else
			{
				//Add to the incorrect list
				cout << "\nOh no! The beam is pulling them up further!\n";
				incorrect.push_back(letter);

				//Add 1 to miss counter
				misses++;
			}

			//Reset guess for repeatability and clear screen
			guess = false;
			system("cls");
		}

		//Call endGame (game is over)
		EndGame(answer, codeWord);

		//Print codeword after
		cout << "                            The Codeword was " << codeWord << "\n\n";

		//Ask if they want to play again
		PlayAgain();
		cin >> yesOrNo;

		//If N/n/no, leave the play loop
		if (yesOrNo == 'n' || yesOrNo == 'N')
		{
			playAgain = false;
		}
		//If yes, stay in the play loop
		else if (yesOrNo == 'y' || yesOrNo == 'Y')
		{
			//Do nothing
		}
		//Just in case
		else
		{
			cout << "Please enter either Y or N\n";
		}

	} while (playAgain);
}


