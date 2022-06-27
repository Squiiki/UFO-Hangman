#pragma once
#include <vector>
#include <string>

using namespace std;

//**********************
//Declarations
//**********************

//Play again variable
bool playAgain = true;

//Play again
void PlayAgain();

//Greeting
void Greet();

//Choose a codeword
string AssignCodeword();

//Show UFO hangman
void DisplayMisses(int misses);

//Show guess status
void DisplayStatus(string answer, vector<char> incorrect);

//Game has ended
void EndGame(std::string userAnswer, std::string codeWord);

//Show Victory Screen
void Victory();

//Show Loss Screen
void BigLoss();




