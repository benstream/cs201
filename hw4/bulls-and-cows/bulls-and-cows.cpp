/*
Benjamin Stream
Jon Genetti
CS201
bulls-and-cows.cpp
February 26, 2020
*/

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	vector<int> secrets = { 1,2,3,4 };
	vector<int> guesses;
	int guess;
	int bulls = 0;
	int cows = 0;
	while (true)
	{
		for (int i = 0; i < 4; i++) // loop to ask the values
		{
			cout << "Guess the value at " << i << ":";
			cin >> guess;
			guesses.push_back(guess);
		}
	}



}