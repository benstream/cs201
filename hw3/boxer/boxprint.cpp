/*
Benjamin Stream
Jon Genetti
CS201
boxprint.cpp
February 17, 2020
*/

#include <iostream>
#include <string>
#include "boxer.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
	string message;
	int layers;

	cout << "Type Exit_Now as your message to exit." << endl;
	while (message != "Exit_Now")
	{
		cout << "What do you want printed? ";
		cin >> message;
		if (message == "Exit_Now") // To Exit Program
		{
			return 0;
		}
		cout << "How many layers do you want around your text? ";
		cin >> layers;
		if (layers < 0)
		{
			while (layers < 0)
			{
				cout << "Negative numbers are not accepted, please type in a positive: ";
				cin >> layers;
			}
		}
		printBox(message, layers);
		
	}
	
}