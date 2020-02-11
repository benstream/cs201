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
#include<locale>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

bool DoesNameExist(const string& nameToFind, const vector<string> & names);
void InputNames(vector<string>& names);
void PrintNames(const vector<string>& names);
void CapsNames(const vector<string>& names);


int main(int argc, char **argv)
{
	vector<string> names;
	string nameToFind;
	InputNames(names);
	cout << endl << "Please Type a name to find: ";
	cin >> nameToFind;
	cout << "This name is in the list: " << DoesNameExist(nameToFind, names) << endl;
	PrintNames(names);
	cout << "Now I'm going to capitalize the names." << endl;
	CapsNames(names);

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

void PrintNames(const vector<string>& names) //Function for Printing Names
{
	for (string name : names)
	{
		cout << name << endl;
	}
	cout << endl;
}

void CapsNames(const vector<string>& names) // Capitalize the Name
{
	for (string name : names)
	{
		transform(name.begin(), name.end(), name.begin(), ::toupper);
		cout << name << endl;
	}
}