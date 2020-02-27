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
	string str;
	string token;
	while (ReadLine(str))
	{
		std::istringstream instream(str);
		while (instream)
		{
			instream >> token;
			if (token == "end" || token == "End" || token == "END")   
			    
                return tokens.size();
            tokens.push_back(token);
		}
	}
}

// Credit to Jay-Mark Pascua for helping me out with this function
void AnalyseTokens(const vector<string>& tokens) 
{
	vector<string>categories = { "[integer]","[identifier]","[string]","[whitespace]","[unknown]" };
        int flag = 0; // variable to assign tokens
        for (auto i : tokens) // searches tokens
        {
            if (i == "") // identifies whitespace
            {
                flag = 4;
            }

            for (int j = 0; j < i.size(); j++) // scans the letters of the token
            {
                if (flag != 0 && flag != 1) // ends loop when token is discovered
                {
                    break;
                }


                if (i.at(j) == '"' && i.at(i.size() - 1) == '"') // Tests if token is string
                {
                    flag = 2;
                    break;
                }


                for (char c = 48; c <= 57; c++) // Tests if token is integer
                {
                    if (i.at(j) == c)
                    {
                        flag = 1;
                        break;
                    }
                    else if (i.at(j) != c) // Tests if token is identifier
                    {
                        flag = 3;
                    }
                }
            }


            if (flag == 0)
            {
                cout << categories[4] << "\t";
            }

            if (flag == 1) //integer literal
            {
                cout << categories[0] << "\t";
            }


            if (flag == 2) //string literal
            {
                cout << categories[2] << "\t";
                cout << "\"\\\"" << i.substr(1, i.size() - 2) << "\\\"\"" << endl;
            }


            if (flag == 3) //identifier literal
            {
                cout << categories[1] << "\t";
            }

            if (flag == 4) //whitespace literal
            {
                cout << categories[3] << "\t";
            }

            if (flag != 2)
            {
                cout << "\"" << i << "\"" << endl;
            }

            flag = 0; // tests the next token
        }
    }