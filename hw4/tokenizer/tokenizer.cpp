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
			if (token == "end" || token == "End") return tokens.size();
				tokens.push_back(token + " ");
		}
	}
	return 99;
}

void AnalyseTokens(const vector<string>& tokens)
{
	vector<string>categories = { "[integer]","[identifier]","[string]","[whitespace]","[unknown]" };
	int first = 6;
	int current = 6;
	int i = 0;
		for (string token : tokens)
		{
			if (token[0] <= '9' && token[0] >= '0')
			{
				for (char c : token)
				{
					if (c >= '9' || c <= '0')
					{
						cout << categories[5];
					}
				}
			}
			i++;
		}

}