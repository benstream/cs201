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
std::string error;


int main()
{
	cout << "Please choose where on a 10 by 10 grid where you want your X." << endl;
	for (x = 1; x < size; x++)
	{
		for (y = 1; y < size; y++)
		{
			grid[x][y] = " . ";
			cout << grid[x][y] << " ";
		}
		cout << endl;
	}
}