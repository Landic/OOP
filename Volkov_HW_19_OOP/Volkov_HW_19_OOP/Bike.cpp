#include "Bike.h"
#include <iostream>

using namespace std;

Bike::Bike(int value_year, string value_model, short value_number_gears):Transport(value_year, value_model)
{
	number_gears = value_number_gears;
}

void Bike::Show() const
{
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
	cout << "Gears number: " << number_gears << endl;
}

void Bike::Init()
{
	Transport::Init();
	cout << "Enter number of gears" << endl;
	cout << "Enter... ";
	cin >> number_gears;
	system("CLS");
}
