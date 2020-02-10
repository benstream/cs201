/*
Benjamin Stream
Jon Genetti
CS201
names.cpp
2 9, 2020
*/

#include <iostream>
#include <string>
#include <vector>
#include<algorithm>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

void InputNames(vector<string>& names);


int main(int argc, char **argv)
{
	vector<string> names;
	InputNames(names);
	return 0;
}

void InputNames(vector<string>& names)
{

	for (int i = 0; i < 10; i++)
	{
		string name;
		cout << "Please enter a name: ";
		std::getline(cin, name);
		names.push_back(name);
	}
}