#include "Truck.h"
#include <iostream>

using namespace std;

Truck::Truck(float value_fuel_volum, int value_year, string value_model, string value_cargo_type):Transport(value_fuel_volum, value_year, value_model)
{
	cargo_type = value_cargo_type;
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
	cout << "Enter fuel volum" << endl;
	cout << "Enter... ";
	cin >> fuel_volum;
	system("cls");
	cout << "Enter model" << endl;
	cout << "Enter... ";
	cin >> model;
	system("cls");
	cout << "Enter year" << endl;
	cout << "Enter... ";
	cin >> year;
	system("cls");
	cout << "Enter cargo type" << endl;
	cout << "Enter... ";
	cin >> cargo_type;
	system("Cls");
}
