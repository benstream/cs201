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
