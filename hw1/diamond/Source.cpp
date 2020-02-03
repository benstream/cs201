/*
Benjamin Stream
Jon Genetti
CS201
diamond.cpp
February 2, 2020
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

//Declaration of variables

int lines = 0; 

int main()
{
	cout << "Please type a whole positive number above zero:" << endl;

	// Function to notify user of an error with input.	
		
		while (lines <= 0)
		{
			if (!(cin >> lines) or lines <= 0)
				{

					cin.clear();
					cin.ignore();
					cout << "What you entered is not a whole positive number above zero" << endl;
					cout << "Please type a whole positive number above zero:" << endl;
					
		}
	}
	// Function for building the diamond.

	cout << lines << endl;
	

}