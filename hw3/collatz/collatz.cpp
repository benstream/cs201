/*
Benjamin Stream
Jon Genetti
CS201
program.cpp
February 17, 2020
*/

#include <iostream>
#include<vector>

using std::cout;
using std::endl;
using std::cin;

int collatz(int num);
int main()
{
	int a;
	cout << "Insert a positive number to begin: ";
	cin >> a;
	while (a <= 0)
	{
		cout << "Not a valid input, please input a POSITIVE number: ";
		cin >> a;
	}
	while (a > 1)
	{
		cout << a << " ";
		a = collatz(a);
	}
	cout << a << endl;
	return 0;
}
int collatz(int num)
{
	if (num % 2 == 0)
	{
		return num / 2;
	}
	else
	{
		return num * 3 + 1;
	}
}