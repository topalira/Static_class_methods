#include <iostream>
#include "Products.h"
using namespace std;

int main()
{
	Products::PrintCount();
	Products a("Laptop ", "Electronic ", 56000, 2.5);
	a.Print();
	Products b;
	b.Input();
	b.Print();
	Products::PrintCount();
}