/*
Benjamin Stream
Jon Genetti
CS201
grid.cpp
Month Day, 2020
*/

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;

// Variables
const int size = 6;
std::string grid[size][size];
int x, y = 0;
int holding, holding2 = 0;
int choicex, choicey = 0;

int main()
{
	cout << "Please choose where on a " << size - 1 << " by " << size - 1 << " grid where you want your X." << endl;
	while (holding >= 0) 
	{

		while (!cin) //checks for valid input
		{
			cout << "That was no integer! Please Try again." << endl;;
			cin.clear();
			cin.ignore();
					
		}
		while (holding >= 0)
		{

			cout << "Enter Column Value: ";
			cin >> holding;
			if (holding >= 0)
			{
				choicex = holding;
				cout << "Enter Row Value: ";
				cin >> holding2;
				if (holding2 >= 0)
				{
					choicey = holding2;
					grid[choicey][choicex] = "X";
				}
				else
				{
					break;
				}
			}
			else
			{
				break;
			}
		


				for (x = 0; x < size; x++)
				{

					for (y = 0; y < size; y++)
					{	
						grid[x][y] = ".";
				
						grid[x][0] = std::to_string(x);
						grid[0][y] = std::to_string(y);

						grid[choicey][choicex] = "X";
				
						cout << grid[x][y] << " "; //actually prints grid
				
					}
					cout << endl;
				}
		}
	}
}