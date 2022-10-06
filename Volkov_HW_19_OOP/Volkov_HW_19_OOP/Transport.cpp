#include "Transport.h"
#include <iostream>

using namespace std;

Transport::Transport(float value_fuel_volum, int value_year, char* value_model)
{
	fuel_volum = value_fuel_volum;
	year = value_year;
	model = new char[strlen(value_model) + 1];
	strcpy_s(model, strlen(value_model) + 1, value_model);
}

Transport::Transport(int value_year, char* value_model)
{
	year = value_year;
	model = new char[strlen(value_model) + 1];
	strcpy_s(model, strlen(value_model) + 1, value_model);
}

void Transport::Init()
{
	cout << "Enter fuel volum" << endl;
	cout << "Enter... ";
	cin >> fuel_volum;
	system("cls");
	char temporarily[20];
	cout << "Enter model" << endl;
	cout << "Enter... ";
	cin >> temporarily;
	if (model != nullptr) {
		cout << model << " remove!" << endl;
		delete[] model;
	}
	model = new char[strlen(temporarily) + 1];
	strcpy_s(model, strlen(temporarily) + 1, temporarily);
	system("cls");
	cout << "Enter year" << endl;
	cout << "Enter... ";
	cin >> year;
	system("cls");
}


void Transport::SetTransport(const float value_fuel_volum, const char* value_model, const int value_year)
{
	fuel_volum = value_fuel_volum;
	model = new char[strlen(value_model) + 1];
	strcpy_s(model, strlen(value_model) + 1, value_model);
	year = value_year;
}

void Transport::Show() const
{
	cout << "No transport" << endl;
}

Transport::~Transport() {
	cout << "Destructor Transport" << endl;
	delete[] model;
	year = 0;
	model = 0;
}