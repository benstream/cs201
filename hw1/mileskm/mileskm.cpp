/*
Benjamin Stream
Jon Genetti
CS201
mileskm.cpp
February 3, 2020
*/

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;

// Variables
float miles, kilometers = 0;
int done = 0;
int main()
{
	cout << "Enter number of miles for conversion: ";
		cin >> miles;
		kilometers = (miles / 1.609); //Calculates the conversion
			cout << "This is " << kilometers << " kilometers." << endl;
			if (!cin) //checks for valid input
			{
				cout << "That was no valid input! Please Try again. " << endl;;
				cin.clear();
				cin.ignore();

			}
			else
			{
				done = 0
			}
}