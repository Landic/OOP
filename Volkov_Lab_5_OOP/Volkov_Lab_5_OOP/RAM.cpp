#include "RAM.h"
#include <iostream>
#include <string>

using namespace std;

RAM::RAM()
{
	model = nullptr;
	memory = 0;
}

RAM::RAM(string value_model, short value_memory)
{
	model = value_model;
	memory = value_memory;
}

void RAM::Show()
{
	cout << "|      RAM      |" << endl;
	cout << "|---------------|" << endl;
	cout << "|Model: " << model << "  |" << endl;
	cout << "|Memory: " << memory << " GB  |" << endl;
	cout << "|---------------|" << endl;
}
