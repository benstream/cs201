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
    
    while (numbers >= 0)
    {
        
        cout << "Enter a positive integer (0 to end): ";
        // Function to notify user of an error with input.
        cin >> error;
        // Function to pick greatest entered number
        if (numbers > greatest)
        {
            greatest = numbers;
        }

        
        // Checking if string can be converted to int
        try {
            numbers = std::stoi(error);
        }
            catch (...)
            {
                cout << "Invalid value, try again" << endl;
            }

        
            
        }
  
    

}