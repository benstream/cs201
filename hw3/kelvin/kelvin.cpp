/*
Benjamin Stream
Jon Genetti
CS201
kelvin.cpp
Month Day, 2020
*/

#include <iostream>
#include <string>
using std::cout; //added to fix the error of not using std::cout / std::cin
using std::endl;
using std::cin;

// Converts Celsius to Kelvin
double ctok(double c)
{
	double k = c + 273.15; // Changed int to double to prevent dataloss
	return k; // changed to the correct variable
}

int main()
{
	double c = 0;
	cout << "Please type in the tempurature in Celcius: "; //added a prompt for the user
	cin >> c; //fixed typo I assume of d to c
	double k = ctok(c); // removed quotes that made variable c a string.
	if (k < 0) // Checking for valid input 
	{ 
		cout << "You have entered a number below the lowest tempurature possible."; 
		return 0; 
	}
	cout << k << endl;  // fixed capitalization error
	
}