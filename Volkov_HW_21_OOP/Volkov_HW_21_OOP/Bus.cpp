#include "Bus.h"
#include <iostream>
#include <Windows.h>

using namespace std;

Bus::Bus(int value_passenger, int value_passenger_max, double value_fuel, double value_fuel_tank_volume):Vehicle(value_fuel, value_fuel_tank_volume)
{
	passenger = value_passenger;
	passenger_max = value_passenger_max;
}

void Bus::Init()
{
	Vehicle::Init();
	cout << "Enter passenger maximum in bus" << endl;
	cout << "Enter... ";
	cin >> passenger_max;
	system("cls");
	while (true) {
		cout << "Enter passenger" << endl;
		cout << "Enter... ";
		cin >> passenger;
		if (passenger > passenger_max) {
			cout << "Error! Passenger more then passenger max in bus! Retry" << endl;
			continue;
		}
		break;
	}
	system("cls");
}

void Bus::Show()
{
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel volume tank: " << fuel_tank_volume << endl;
	cout << "Passenger maximum: " << passenger_max << endl;
	cout << "Passenger: " << passenger << endl;
}

int Bus::Get_Passenger_Max()
{
	return passenger_max;
}

int Bus::Get_Passenger()
{
	return passenger;
}

void Bus::Arrive()
{
	fuel = fuel - fuel * 0.6; // every time it arrives 60 percent of the fuel is missing
	obj.Set_People_On_Base(obj.Get_People_On_Base() + passenger + 1); // Returns people and driver back to base
	passenger = 0; // assigned by the passenger 0
	obj.Set_Vehicles_On_Base(obj.Get_Vehicles_On_Base() + 1); // add one car to the base
	obj.Set_Petrol_On_Base(obj.Get_Petrol_On_Base() + fuel); // add the fuel that is left
	fuel = 0; // assign to fuel 0
}

void Bus::Leave()
{
	// checking if there is a shortage of resources on the base
	if (obj.Get_People_On_Base() < passenger_max + 1 || obj.Get_Petrol_On_Base() < fuel_tank_volume || obj.Get_Vehicles_On_Base() < 1) {
		cout << "Error! Not enough resources" << endl;
		Sleep(2000);
		system("cls");
	}
	else { // if there is enough, the block of code below is triggered
		if (fuel < fuel_tank_volume) { // if the fuel is less than the maximum volume, then we refuel
			cout << "Refueling in progress..." << endl;
			fuel = fuel_tank_volume; // assign the maximum value to the fuel
			// we take away the maximum amount of fuel from the base
			obj.Set_Petrol_On_Base(obj.Get_Petrol_On_Base() - fuel_tank_volume);
			Sleep(2000);
			system("cls");
		}
		// we check if there are less passengers than the maximum we can place then we load them
		if (passenger < passenger_max) {
			cout << "Loading passenger in progress..." << endl;
			passenger = passenger_max; //  assign to passengers their maximum number
			obj.Set_People_On_Base(obj.Get_People_On_Base() - passenger_max); // subtract the maximum number of passengers from the base
			Sleep(2000);
			system("cls");
		}
		// we take away one transport from the base
		obj.Set_Vehicles_On_Base(obj.Get_Vehicles_On_Base() - 1);
		cout << "Bus is leave!" << endl;
		Sleep(1000);
		system("cls");
	}
}
