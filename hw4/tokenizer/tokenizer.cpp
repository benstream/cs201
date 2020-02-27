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
			if (token == "end" || token == "End" || token == "END") return tokens.size();
				tokens.push_back(token + " ");
		}
	}
	return 99;
}

void AnalyseTokens(const vector<string>& tokens)
{
	vector<string>categories = { "[integer]","[identifier]","[string]","[whitespace]","[unknown]" };
        int flag = 0; // Determines the token
        for (auto i : tokens) // Goes through all elements of vector tokens
        {
            if (i == "") // TEST IF TOKEN = WHITESPACE
            {
                flag = 4;
            }

            for (int j = 0; j < i.size(); j++) // Goes through all letters of token; int j = element of string
            {
                if (flag != 0 && flag != 1) // Stops for loop if token is determined
                {
                    break;
                }


                if (i.at(j) == '"' && i.at(i.size() - 1) == '"') // TEST IF TOKEN = STRING LITERAL
                {
                    flag = 2;
                    break;
                }


                for (char c = 48; c <= 57; c++) // TEST IF TOKEN = INTEGER LITERAL; char c = numbers 0-9
                {
                    if (i.at(j) == c)
                    {
                        flag = 1;
                        break;
                    }
                    else if (i.at(j) != c) // TEST IF TOKEN = IDENTIFIER;
                    {
                        flag = 3;
                    }
                }
            }


            if (flag == 0)
            {
                cout << categories[4] << "\t";
            }

            if (flag == 1) // Token is integer literal
            {
                cout << categories[0] << "\t";
            }


            if (flag == 2) // Token is string literal
            {
                cout << categories[2] << "\t";
                cout << "\"\\\"" << i.substr(1, i.size() - 2) << "\\\"\"" << endl;
            }


            if (flag == 3) // Token is identifier literal
            {
                cout << categories[1] << "\t";
            }

            if (flag == 4) // Token is whitespace literal
            {
                cout << categories[3] << "\t";
            }

            if (flag != 2)
            {
                cout << "\"" << i << "\"" << endl;
            }

            flag = 0; // Resets to test next token
        }
    }