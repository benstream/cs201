/*
Benjamin Stream
Jon Genetti
CS201
rice.cpp
February 10, 2020
*/

#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int grains = 1;
	for (int i = 1; i <= 34; i++)
	{
		cout.unsetf(std::ios::floatfield);
		cout << "Box: " << i << endl << "Grains: " << grains << endl;
		grains *= 2;
	}
	cout << "int variable type overflows at Box 31, 1073741824 grains" << endl
		<< "double gives approximate up to box 1024, 8.98847e+307";
	return grains;
}