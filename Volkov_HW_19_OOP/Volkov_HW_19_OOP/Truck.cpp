#include "Truck.h"
#include <iostream>

using namespace std;

Truck::Truck(float value_fuel_volum, int value_year, char* value_model, char* value_cargo_type):Transport(value_fuel_volum, value_year, value_model)
{
	cargo_type = new char[strlen(value_cargo_type) + 1];
	strcpy_s(cargo_type, strlen(value_cargo_type) + 1, value_cargo_type);
}

void Truck::Show() const
{
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
	cout << "Cargo type: " << cargo_type << endl;
	cout << "Fuel volum: " << fuel_volum << endl;
}

void Truck::Init()
{
	Transport::Init();
	char temporarily[20];
	cout << "Enter cargo type" << endl;
	cout << "Enter... ";
	cin >> temporarily;
	if (cargo_type != nullptr) {
		cout << cargo_type << " remove!" << endl;
		delete[] cargo_type;
	}
	cargo_type = new char[strlen(temporarily) + 1];
	strcpy_s(cargo_type, strlen(temporarily) + 1, temporarily);
	system("cls");
}

Truck::~Truck()
{
	cout << "Destructor Truck" << endl;
	delete[] cargo_type;
}
