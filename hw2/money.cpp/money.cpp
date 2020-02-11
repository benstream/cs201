/*
Benjamin Stream
Jon Genetti
CS201
money.cpp
February 10, 2020
*/

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

//
void money(float value, string moneyplural, string money);
int main()
{
	money(0.25, "Pennies", "Penny");
}

void money(float value, string moneyplural, string moneysingle) // Function for money counting
{
	float amount = 0;
	if (amount < 0) 
	{
		cout << "Negative value provided" << endl;
		return;
	}
	cout << "How many " << moneyplural << " do you have: ";
	cin >> amount;
	cout << "You have: " << amount << " ";
	
	if (amount >= 0)
	{
		cout << moneyplural;
	}
	else if (amount = 1)
	{
		cout << moneysingle;
	}
	 
	 

}