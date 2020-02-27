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
	int guess{};
	int bulls = 0;
	int cows = 0;
	while (bulls != 4)
	{
	
	while (true)
	{
			if (guess < 0) for (int i = 0; i < 4; i++)
			{
				cout << secrets[i];
				return 0;
			}
			for (int i = 0; i < 4; i++) // loop to ask the values
			{
				cout << "Guess the value at " << i + 1 << ": ";
				cin >> guess;
				if (guess < 0)
				{
					cout << "The correct numbers are:" << secrets[0] << secrets[1] << secrets[2] << secrets[3];
					return 0;
				}
				guesses.push_back(guess);
			}

			for (int i = 0; i < 4; i++)
			{
				if (secrets[i] == guesses[i]) bulls++;
				else cows++;
			}
			cout << bulls << " bulls and " << cows << " cows" << endl;
			if (bulls == 4)
			{
				return 0;

			}
			cows = 0;
			bulls = 0;
			guesses.clear();
		}
	}



}