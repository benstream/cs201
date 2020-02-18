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
	cout << "What do you want printed? ";
		cin >> message;
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
		else
		{
			printBox(message, layers);
			return 0;
		}
}