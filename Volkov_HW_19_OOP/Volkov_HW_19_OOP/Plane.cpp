#include "Plane.h"
#include <iostream>

using namespace std;

Plane::Plane(float value_fuel_volum, int value_year, char* value_model, float value_mass, char* value_type_engine):Transport(value_fuel_volum, value_year, value_model)
{
	mass = value_mass;
	type_engine = new char[strlen(value_type_engine) + 1];
	strcpy_s(type_engine, strlen(value_type_engine) + 1, value_type_engine);
}

void Plane::Show() const
{
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
	cout << "Mass: " << mass << endl;
	cout << "Fuel volum: " << fuel_volum << endl;
	cout << "Type engine: " << type_engine << endl;
}

void Plane::Init() {
	Transport::Init();
	cout << "Enter mass" << endl;
	cout << "Enter... ";
	cin >> mass;
	system("cls");
	char temporarily[20];
	cout << "Enter type engine" << endl;
	cout << "Enter... ";
	cin >> temporarily;
	if (type_engine != nullptr) {
		cout << type_engine << " remove!" << endl;
		delete[] type_engine;
	}
	type_engine = new char[strlen(temporarily) + 1];
	strcpy_s(type_engine, strlen(temporarily) + 1, temporarily);
	system("cls");
}

Plane::~Plane()
{
	cout << "Destructor Plane" << endl;
	delete[] type_engine;
	mass = 0;
}
