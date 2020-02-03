/*
Benjamin Stream
Jon Genetti
CS201
greatest.cpp
February 2, 2020
*/

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;

// Variables
std::string error;
int numbers = 1;
int greatest = 0;

int main()
{
    cout << "Enter a sequence of positive integers, ending with zero." << endl;
    cout << "I will print the greatest positive number entered." << endl;
    
    while (numbers > 0)
    {
        // Function to notify user of an error with input.
        // Checking if string can be converted to int
        cout << "Enter a positive integer (0 to end): ";
        cin >> error;
        try {
            numbers = std::stoi(error);
        }
            catch (...)
            {
                cout << "Invalid value, try again" << endl;
            }

            // Function to pick greatest entered number
            if (numbers > greatest and numbers != 1)
            {
                greatest = numbers;
            }
          
        }
          
    if (greatest <= 0)
    {
        cout << "No positive integers were entered.";
    }
    else
    {
        cout << "The greatest number entered:" << greatest;
    }
    

}