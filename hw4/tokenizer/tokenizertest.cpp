/*
Benjamin Stream
Jon Genetti
CS201
tokenizertest.cpp
February 26, 2020
*/

#include "tokenizer.h"

//testing function
int main()
{
	std::vector<std::string> tokens;
	std::cout << "Enter your text: ";
	StringToTokenWS(tokens);
	AnalyseTokens(tokens);
	return 0;
}