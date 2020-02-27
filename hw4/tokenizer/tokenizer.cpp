/*
Benjamin Stream
Jon Genetti
CS201
tokenizer.cpp
February 26, 2020
*/

#include "tokenizer.h"

bool ReadLine(string& str)
{
	std::getline(cin, str);
	if (str == "")
	{
		return false;
	}
	return true;
}

unsigned StringToTokenWS(vector<string>& tokens)
{
	string line;
	string token;
	while (ReadLine(line))
	{
		std::istringstream instream(line);
		while (instream)
		{
			instream >> token;
			if (token == "end" || token == "End")
				tokens.push_back(token + " ");
		}
	}
	return 99;
}