#include "Jeep.h"
#include "Transport.h"
#include <iostream>

using namespace std;

Jeep::Jeep(float value_fuel_volum, int value_year, char* value_model, char* value_drive_unit):Transport(value_fuel_volum,value_year, value_model)
{
	drive_unit = new char[strlen(value_drive_unit) + 1];
	strcpy_s(drive_unit, strlen(value_drive_unit) + 1, value_drive_unit);
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
	char temporarily[20];
	cout << "Enter drive unit" << endl;
	cout << "Enter... ";
	cin >> temporarily;
	if (drive_unit != nullptr) {
		cout << drive_unit << " remove!" << endl;
		delete[] drive_unit;
	}
	drive_unit = new char[strlen(temporarily) + 1];
	strcpy_s(drive_unit, strlen(temporarily) + 1, temporarily);
	system("cls");
}

Jeep::~Jeep()
{
	cout << "Destructor Jeep" << endl;
	delete[] drive_unit;
}
