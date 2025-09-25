#include "Products.h"
#include <iostream>
using namespace std;

Products::Products()
{
	name = ' ';
	category = ' ';
	price = 0.0;
	weight = 0.0;
	count++;
}

Products::Products(string n, string c, double p, double w)
{
	name = n;
	category = c;
	price = p;
	weight = w;
	count++;
}

void Products::Print()
{
	cout << name << "\t" << category << "\t" << price << "\t" << weight << "\t" << endl;
}

void Products::Init(string n, string c, double p, double w)
{
	name = n;
	category = c;
	price = p;
	weight = w;
}

void Products::Input()
{
	char buff[50];
	cout << "enter product name: ";
	cin.getline(buff, 50);
	name = buff;

	cout << "enter product category: ";
	cin.getline(buff, 50);
	category = buff;

	cout << "enter product price: ";
	cin >> price;

	cout << "enter product weight: ";
	cin >> weight;
}

void Products::SetName(string n)
{
	name = n;
}

string Products::CetName()
{
	return name;
}

void Products::SetCategory(string c)
{
	category = c;
}

string Products::CetCategory()
{
	return category;
}

void Products::SetPrice(double p)
{
	price = p;
}

double Products::CetPrice()
{
	return price;
}

void Products::SetWeight(double w)
{
	weight = w;
}

double Products::CetWeight()
{
	return weight;
}

void Products::PrintCount()
{
	cout << "Count = " << count << endl;
}

int Products::count = 0;
