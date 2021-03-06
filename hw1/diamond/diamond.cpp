/*
Benjamin Stream
Jon Genetti
CS201
diamond.cpp
February 2, 2020
*/

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;

//Declaration of variables

int lines = 0; 
std::string error;
int main()
{
 
	// Function to notify user of an error with input.	
		   do
          {
           cout << "Please type a whole positive number above zero for number of rows:";
           cin >> error;

           // Checking if string can be converted to int
            try {
                lines = std::stoi(error);
                if (lines <= 0)
                {
                    cout << "Invalid value, try again" << endl;
                }
            }
            catch (...)
            {
                cout << "Invalid value, try again" << endl;
            }
            
            
          } while (lines == 0 or lines <= 0);

	// Function for building the diamond.
    
    int i, rows{}, spaces = 1;
    spaces = lines - 1;
    for (rows = 1; rows <= lines; rows++) //top rows
    {
        for (i = 1; i <= spaces; i++)
        {
            cout << " ";
        }
        spaces--;
        for (i = 1; i <= (2 * rows - 1); i++)
        {
            cout << "#";
        }
        cout << endl;
    }
    spaces = 1;
    for (rows = 1; rows <= (lines - 1); rows++) //bottom rows
    {
        for (i = 1; i <= spaces; i++)
        {
            cout << " ";
        }
        spaces++;
        for (i = 1; i <= (2 * (lines - rows) - 1); i++)
        {
            cout << "#";
        }
        cout<< endl;
    }
          
	

}