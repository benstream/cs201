/*
Benjamin Stream
Jon Genetti
CS201
fifo-lifo.cpp
February 26, 2020
*/

#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::istringstream;
using std::string;
using std::vector;

// First In First Out
void FifoPush(vector<string>& container, const string& item);
void FifoPop(vector<string>& container, string& item);

// Last In Last Out
void LifoPush(vector<string>& container, const string& item);
void LifoPop(vector<string>& container, string& item);

// Shared Functionality
bool IsContainerEmpty(const vector<string>& container);
void PrintContainer(const vector<string>& container);

int main()
{	
	int choice = 0; // Value for User Choice
    vector<string> fifo;
    vector<string> lifo; 
    string choicestring; 
    string item;
	cout << "~Please Choose your action~" << endl;
	cout << "~1: Add to FIFO Container~" << endl;
	cout << "~2: POP FIFO Container~" << endl;
	cout << "~3: Add to LIFO Container~" << endl;
	cout << "~4: POP LIFO Container~" << endl;
	cout << "~5: Exit Program~" << endl;
	cout << "Choice: ";
	while (choice != 5)
	{
		getline(cin, choicestring); // Gets Users Input
		istringstream option(choicestring); // Reads string to find choice
		option >> choice; // Puts option into choice as int

		if (choice > 5 || choice < 0)
		{
			cout << "Please choose a valid Number" << endl;
		}
	}

    
}

// Functions, First in First Out.

void FifoPush(vector<string>& container, const string& item)
{
	container.push_back(item);
	cout << endl << "FIFO Container:";
	PrintContainer(container);
}

void FifoPop(vector<string>& container, string& item)
{
	if (IsContainerEmpty(container) == true)
	{
		vector<string> TempStorage(container.size() - 1); // Temporary Storage to hold items.
		for (int i = 1; i < container.size(); i++)
		{
			TempStorage[i - 1] = container[i];
			cout << endl << "Last item in the list removed." << endl;
			cout << endl << "Items in FIFO: " << endl;
		}
	}
	else
	{
		cout << endl << "There is nothing in this container! Please put something in it." << endl << endl;
	}
}

// Functions, Last in First Out.

void LifoPush(vector<string>& container, const string& item)
{
	container.push_back(item);
	cout << endl << "LIFO Container:";
	PrintContainer(container);
}

void LifoPop(vector<string>& container, string& item)
{
	if (IsContainerEmpty(container) == true)
	{
		container.pop_back();
		cout << endl << "Last item added has been removed." << endl;
		cout << endl << "Items in LIFO: " << endl;
	}
	else 
	{
		cout << endl << "There is nothing in this container! Please put something in it." << endl << endl;
	}
}

// Shared Functions

bool IsContainerEmpty(const vector<string>& container)
{
	if (container.size() > 0)
	{
		return true;
	}
	else return false;
}

void PrintContainer(const vector<string>& container)
{
	for (auto i : container) 
	{
		cout << " * "<< i << " * ";
	}
	cout << endl;
}