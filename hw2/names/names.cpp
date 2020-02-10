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
bool DoesNameExist(const string & nameToFind, const vector<string> & names);
void InputNames(vector<string> & names);


int main(int argc, char **argv)
{
	vector<string> names;
	string nameToFind;
	InputNames(names);
	cout << endl << "Please Type a name to find: ";
	cin >> nameToFind;
	cout << "This name is in the list: " << DoesNameExist(nameToFind, names) << endl;
}

void InputNames(vector<string> & names) // Function to input names
{

	for (int i = 0; i < 10; i++)
	{
		string name;
		cout << "Please enter a name: ";
		std::getline(cin, name);
		names.push_back(name);
	}
}

bool DoesNameExist(const string & nameToFind, const vector<string> & names) // Function set up to find names within vector 
	{

	for (string name : names)
	{
		if (name == nameToFind)
		{
			return true;
		}
		
	}
		return false;
	}