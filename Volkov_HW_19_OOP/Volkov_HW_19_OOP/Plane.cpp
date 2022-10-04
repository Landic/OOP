#include "Plane.h"
#include <iostream>

using namespace std;

Plane::Plane(float value_fuel_volum, int value_year, string value_model, float value_mass):Transport(value_fuel_volum, value_year, value_model)
{
	mass = value_mass;
}

void Plane::Show() const
{
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
	cout << "Mass: " << mass << endl;
	cout << "Fuel volum: " << fuel_volum << endl;
}

void Plane::Init() {
	Transport::Init();
	cout << "Enter mass" << endl;
	cout << "Enter... ";
	cin >> mass;
	system("cls");
}
