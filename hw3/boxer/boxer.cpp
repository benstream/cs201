/*
Benjamin Stream
Jon Genetti
CS201
boxer.cpp
February 17, 2020
*/

#include <iostream>
#include <string>
#include "boxer.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;

void topBottom(std::string message, int layers) // For the top and bottom layers of the box.
{
	string asterisk(layers, '*');
		for (int i = 0; i < layers; i++)
		{
			cout << asterisk;
			for (int k = 0; k < message.length() + 2; k++)
			{
				cout << "*";
			}
			cout << asterisk << endl;
		}
	

}

void printBox(std::string message, int layers) // to print the box body.
{
	string asterick(layers, '*'); // for the left and right of text
	topBottom(message, layers);
	cout << asterick;
	for (int j = 0; j < message.length() + 2; j++)
	{
		cout << " ";
	}
	
	cout << asterick << endl
		<< asterick << " " << message << " " << asterick
		<< endl << asterick;
	for (int j = 0; j < message.length() + 2; j++)
	{
		cout << " ";
	}
	cout << asterick << endl;
	topBottom(message, layers);
}	