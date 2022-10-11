#include "Vessel.h"
#include <iostream>

using namespace std;

vessel::Vessel::Vessel(float value_fuel_volum, int value_year, char* value_model, char* value_type_vessel):Transport(value_fuel_volum, value_year, value_model)
{
	type_vessel = new char[strlen(value_type_vessel) + 1];
	strcpy_s(type_vessel, strlen(value_type_vessel) + 1, value_type_vessel);
}

void vessel::Vessel::Show() const
{
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
	cout << "Type vesse: " << type_vessel << endl;
	cout << "Fuel volum: " << fuel_volum << endl;
}

void vessel::Vessel::Init()
{
	Transport::Init();
	char temporarily[20];
	cout << "Enter type vessel" << endl;
	cout << "Enter... ";
	cin >> temporarily;
	if (type_vessel != nullptr) {
		cout << type_vessel << " remove!" << endl;
		delete[] type_vessel;
	}
	type_vessel = new char[strlen(temporarily) + 1];
	strcpy_s(type_vessel, strlen(temporarily) + 1, temporarily);
	system("cls");
}

vessel::Vessel::~Vessel()
{
	cout << "Destructor Vessel" << endl;
	delete[] type_vessel;
}
