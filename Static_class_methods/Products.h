#pragma once
#include <string>
using namespace std;
class Products
{
	string name;
	string category;
	double price;
	double weight;
	static int count;
public:
	Products();
	Products(string n, string c, double p, double w);
	void Print();
	void Init(string n, string c, double p, double w);
	void Input();

	void SetName(string n);
	string CetName();

	void SetCategory(string c);
	string CetCategory();

	void SetPrice(double p);
	double CetPrice();

	void SetWeight(double w);
	double CetWeight();

	static void PrintCount();
};
