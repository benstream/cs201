/*
Benjamin Stream
Jon Genetti
CS201
tokenizer.h
February 26, 2020
*/
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include<sstream>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;


/*
Uses getline() to retrieve a string from the user. 
Returns true if the string is valid and false if it is not.
*/
bool Readline(string& str);

/*
Using istringstream to read where the white space is.
Pushes a blank string at the end of the line
Returns tokens read from the strings inputed.
*/
unsigned StringToTokenWS(vector<string>& tokens);

/*
Prints out which type of token is detected as well as the token itself
*/
void AnalyseTokens(const vector<string>& tokens);
