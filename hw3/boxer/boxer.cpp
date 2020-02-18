/*
Benjamin Stream
Jon Genetti
CS201
boxer.cpp
February 17, 2020
*/

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

void topBottom(std::string message, int layers) // For the top and bottom layers of the box.
{
	string astrisk(layers, '*');
		for (int i = 0; i < layers; i++)
		{
			cout << "*";
		}
	cout << astrisk << endl;

}

void printBox(std::string message, int layers) // to print the box body.
{

}