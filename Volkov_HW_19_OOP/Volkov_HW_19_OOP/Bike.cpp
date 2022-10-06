#include "Bike.h"
#include <iostream>

using namespace std;

Bike::Bike(int value_year, char* value_model, short value_number_gears, char* value_type_brake):Transport(value_year, value_model)
{
	number_gears = value_number_gears;
	type_brake = new char[strlen(value_type_brake) + 1];
	strcpy_s(type_brake, strlen(value_type_brake) + 1, value_type_brake);
}

void Bike::Show() const
{
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
	cout << "Gears number: " << number_gears << endl;
	cout << "Type brake: " << type_brake << endl;
}

void Bike::Init()
{
	Transport::Init();
	cout << "Enter number of gears" << endl;
	cout << "Enter... ";
	cin >> number_gears;
	system("CLS");
	char temporarily[20];
	cout << "Enter type brake" << endl;
	cout << "Enter... ";
	cin >> temporarily;
	if (type_brake != nullptr) {
		cout << type_brake << " remove!" << endl;
		delete[] type_brake;
	}
	type_brake = new char[strlen(temporarily) + 1];
	strcpy_s(type_brake, strlen(temporarily) + 1, temporarily);
	system("cls");
}

Bike::~Bike()
{
	cout << "Destructor Bike" << endl;
	delete[] type_brake;
	number_gears = 0;
}
