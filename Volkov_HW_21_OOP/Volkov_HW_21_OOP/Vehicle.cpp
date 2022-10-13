#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle(double value_fuel, double value_fuel_tank_volume)
{
	fuel = value_fuel;
	fuel_tank_volume = value_fuel_tank_volume;
}

void Vehicle::Init()
{
	cout << "Enter fuel in your car" << endl;
	cout << "Enter... ";
	cin >> fuel;
	system("cls");
	cout << "Enter your volume fuel tank" << endl;
	cout << "Enter... ";
	cin >> fuel_tank_volume;
}

void Vehicle::Show()
{
	cout << "Empty" << fuel;
}
