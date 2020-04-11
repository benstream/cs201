/*
Benjamin Stream
Jon Genetti
CS201
shopping.cpp
April 10, 2020
*/

#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <algorithm>
using std::cout;
using std::endl;
using std::cin;
struct Record
{
	double unitPrice;
	int units;
};

void printInventory(std::map<std::string, Record>& inventory);
void buy(std::map<std::string, Record>& inventory, double& total);
void drop(std::map<std::string, Record>& inventory, double& total);

int main()
{
	std::string action;
	std::map<std::string, Record > inventory;
	inventory["lettuce"] = { 2.0,10 };
	inventory["toilet paper roll"] = { 10000.0,2 };
	inventory["apple"] = { 1.0,12 };
	inventory["orange"] = { 1.0,13 };
	inventory["banana"] = { 1.0,11 };
	double total = 0;
	printInventory(inventory);
	cout << "You have a couple choices you can 'view', 'buy', 'exit', or 'remove item'." << endl;
	while (true)
	{
		getline(cin, action);
		std::transform(action.begin(), action.end(), action.begin(), ::tolower);
		if (action == "view")
		{
			printInventory(inventory);
		}
		else if (action == "buy")
		{
			buy(inventory, total);
		}
		else if (action == "exit")
		{
			break;
		}
		else if (action == "remove item")
		{
			drop(inventory, total);
		}
		cout << "Current total is: " << total << "$" << endl;
	}
	return 0;
}

void printInventory(std::map<std::string, Record>& inventory)
{
	for (auto item : inventory)
	{
		cout << "We have " << item.second.units << " " << item.first << "s for the low price of " << item.second.unitPrice << " $. "<<endl;
	}
}

void buy(std::map<std::string, Record>& inventory, double& total)
{
	cout << "What would you like to buy? ";
	std::string item;
	getline(cin, item);
	if (inventory[item].units > 0)
	{
		inventory[item].units -= 1;
		total += inventory[item].unitPrice;
	}
	else
	{
		cout << endl << "We don't have any more of your requested item" << endl;
	}
}

void drop(std::map<std::string, Record>& inventory, double& total)
{
	cout << "What would you like to remove from your cart?";
	std::string item;
	getline(cin, item);
	inventory[item].units += 1;
	total -= inventory[item].unitPrice;
}