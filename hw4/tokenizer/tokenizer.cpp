/*
Benjamin Stream
Jon Genetti
CS201
tokenizer.cpp
February 26, 2020
*/

#include "tokenizer.h"
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::cin;

bool ReadLine(string& str)
{
	std::getline(cin, str);
	if (str == "")
	{
		return false;
	}
	return true;
}
