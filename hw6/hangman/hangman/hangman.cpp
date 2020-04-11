/*
Benjamin Stream
Jon Genetti
CS201
hangman.cpp
April 10, 2020
*/

#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

void blankSpace(vector<string>& blank) // Prints underscores for the letters that havent been revealed
{
	for_each(blank.begin(), blank.end(), [](string a) {cout << a; });
}

void showLetter(vector<string>& answer, vector<string>& blank, string guess) // Shows uh the letters youve guessed.
{
	vector<string>::iterator it = find(answer.begin(), answer.end(), guess);
	blank[it - answer.begin()] = guess;
}

bool isCorrect(vector<string> answer, string guess) // Determines if guess is correct
{
	if (find(answer.begin(), answer.end(), guess) != answer.end())
	{
		return true;
	}
	return false;
}

bool alreadyGuessed(map<string, int>& usedGuesses,string guess)
{
	map<string, int>::iterator it = usedGuesses.find(guess);
	if (it != usedGuesses.end())
	{
		return true;
	}
	else
		return false;
}

bool AllLettersFound(vector<string>& answer, vector<string>& blank)
{
	if (answer == blank)
	{
		return true;
	}
	else
		return false;
}

int main()
{
	vector<string> answer{ "a","b","e" };
	vector<string> blank{ "_","_","_" };
	string guess; //The letter guessed
	map<string, int> usedGuesses; // Stores letters used in guesses.
	int attempts = answer.size()*2; // The user gets 2x the ammount of letters in the word of tries
	int win = 0; // variable for win condition, must be 1 to win.
	cout << "***WELCOME TO HANGMAN***" << endl;
	while (attempts != 0 && win == 0)
	{

	}
}