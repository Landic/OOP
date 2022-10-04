#include "Vessel.h"
#include <iostream>

using namespace std;

Vessel::Vessel(float value_fuel_volum, int value_year, string value_model, string value_type_vessel):Transport(value_fuel_volum, value_year, value_model)
{
	type_vessel = value_type_vessel;
}

void Vessel::Show() const
{
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
	cout << "Type vesse: " << type_vessel << endl;
	cout << "Fuel volum: " << fuel_volum << endl;
}

void Vessel::Init()
{
	Transport::Init();
	cout << "Enter type vessel" << endl;
	cout << "Enter... ";
	cin >> type_vessel;
	system("CLS");
}
