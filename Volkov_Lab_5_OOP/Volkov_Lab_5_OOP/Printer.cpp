#include "Printer.h"
#include <iostream>
#include <string>

using namespace std;

Printer::Printer()
{
	model = nullptr;
}

Printer::Printer(string value_model)
{
	model = value_model;
}

Printer::Printer(Printer& obj)
{
	model = obj.model;
}

void Printer::Show()
{
	cout << "|    Printer    |" << endl;
	cout << "|---------------|" << endl;
	cout << "|Model: " << model << "|" << endl;
	cout << " ---------------" << endl;
}
