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

}
