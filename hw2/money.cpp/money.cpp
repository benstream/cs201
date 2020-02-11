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
int pennies;
int nickels;
int dimes;
int quarters;
int halfdollars;

void money(int amount, string moneyplural, string money);
int main()
{
	cout << "How many pennies do you have: ";
		cin >> pennies;
	
	cout << "How many nickels do you have: ";
		cin >> nickels;
		
	cout << "How many dimes do you have: ";
		cin >> dimes;

	cout << "How many quarters do you have: ";
		cin >> quarters;
	
	cout << "How many half dollars do you have: ";
		cin >> halfdollars;

	money(pennies, "Pennies", "Penny");
	money(nickels, "Nickels", "Nickel");
	money(dimes, "Dimes", "Dime");
	money(quarters, "Quarters", "Quarter");
	money(halfdollars, "Half Dollars", "Half Dollar");

	double total = pennies * 0.01 + nickels * 0.05 + dimes * 0.10 + quarters * 0.25 + halfdollars * 0.50;
	cout << "The total is: $" << total;
}

void money(int amount, string moneyplural, string moneysingle) // Function for money counting
{
	if (amount < 0) 
	{
		cout << "Negative value provided" << endl;
		return;
	}
	cout << "You have: " << amount << " ";
	
	if (amount == 1)
	{
		cout << moneysingle << endl;
	}
	else
	{
		cout << moneyplural << endl;
	}

}