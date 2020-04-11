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

}

void printInventory(std::map<std::string, Record>& inventory)
{
	for (auto item : inventory)
	{
		cout << "We have " << item.second.units << " " << item.first << "s for the low price of " << item.second.unitPrice << endl;
	}
}

void buy(std::map<std::string, Record>& inventory, double& total)
{
	cout << "What would you like to buy? ";
	std::string item;
	if (inventory[item].units > 0)
	{
		inventory[item].units -= 1;
		total += inventory[item].unitPrice;
	}
	else
	{
		cout << "We don't have any more of your requested item";
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