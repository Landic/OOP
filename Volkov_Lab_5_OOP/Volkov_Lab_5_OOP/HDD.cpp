#include "HDD.h"
#include <iostream>
#include <string>

using namespace std;

HDD::HDD()
{
	name = nullptr;
	memory = nullptr;
}

HDD::HDD(string value_name, string value_memory)
{
	name = value_name;
	memory = value_memory;
}

void HDD::Show()
{
	cout << "|---------------|" << endl;
	cout << "|      HDD      |" << endl;
	cout << "|---------------|" << endl;
	cout << "|Model: " << name << " |" << endl;
	cout << "|Memory: " << memory << "   |" << endl;
	cout << "|---------------|" << endl;
}
