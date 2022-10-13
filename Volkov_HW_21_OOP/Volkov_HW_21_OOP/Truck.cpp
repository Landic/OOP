#include "Truck.h"
#include <iostream>
#include <Windows.h>

using namespace std;

Truck::Truck(double value_max_load, double value_curent, double value_fuel, double value_fuel_volume_tank):Vehicle(value_fuel, value_fuel_volume_tank)
{
	max_load = value_max_load;
	curent = value_curent;
}

void Truck::Init()
{
	Vehicle::Init();
	cout << "Enter maximum load" << endl;
	cout << "Enter... ";
	cin >> max_load;
	system("cls");
	while (true) {
		cout << "Enter curent" << endl;
		cout << "Enter... ";
		cin >> curent;
		system("cls");
		if (curent > max_load) {
			cout << "Error! Try again!" << endl;
			continue;
		}
		break;
	}
}

void Truck::Show()
{
	cout << "Fuel volume tank: " << fuel_tank_volume << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Maximum load: " << max_load << endl;
	cout << "Curent: " << curent << endl;
}

double Truck::Get_Max_Load()
{
	return max_load;
}

double Truck::Get_Curent()
{
	return curent;
}

void Truck::Arrive()
{
	fuel = fuel - fuel * 0.6; // every time it arrives 60 percent of the fuel is missing
	curent = curent - curent * 0.3; // Brings 30 percent less materials to the base
	obj.Set_Petrol_On_Base(obj.Get_Petrol_On_Base() + fuel); // back fuel to base 
	fuel = 0;
	obj.Set_People_On_Base(obj.Get_People_On_Base() + 1); // Returns driver back to base
	obj.Set_Goods_On_Base(obj.Get_Goods_On_Base() + curent); // add materials 
	curent = 0;
	obj.Set_Vehicles_On_Base(obj.Get_Vehicles_On_Base() + 1); // returns vehicle to base
}

void Truck::Leave()
{
	if (obj.Get_Goods_On_Base() < max_load || obj.Get_Petrol_On_Base() < fuel_tank_volume || obj.Get_People_On_Base() < 1 || obj.Get_Vehicles_On_Base() < 1) // checking if there is a shortage of resources on the base
	{
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
		if (curent < max_load) { // materials are being checked if they are less than the maximum can be uploaded
			cout << "Loading corent in progress..." << endl;
			curent = max_load; // assign the maximum value to the materials
			obj.Set_Goods_On_Base(obj.Get_Goods_On_Base() - max_load); // we take away the maximum amount of materials from the base
			Sleep(2000);
			system("cls");
		}
		obj.Set_People_On_Base(obj.Get_People_On_Base() - 1); // we take away one person from the base this is the driver
		obj.Set_Vehicles_On_Base(obj.Get_Vehicles_On_Base() - 1); // we take away one transport from the base
		cout << "Truck is leave!" << endl;
		Sleep(1000);
		system("cls");
	}
}
