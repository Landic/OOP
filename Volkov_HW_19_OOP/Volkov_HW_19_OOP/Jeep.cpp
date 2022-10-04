#include "Jeep.h"
#include "Transport.h"
#include <iostream>

using namespace std;

Jeep::Jeep(float value_fuel_volum, int value_year, string value_model, string value_drive_unit):Transport(value_fuel_volum,value_year, value_model)
{
	drive_unit = value_drive_unit;
}

void Jeep::Show() const
{
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
	cout << "Drive unit: " << drive_unit << endl;
	cout << "Fuel volume: " << fuel_volum << endl;
}

void Jeep::Init()
{
	Transport::Init();
	cout << "Enter drive unit" << endl;
	cout << "Enter... ";
	cin >> drive_unit;
	system("cls");
}
