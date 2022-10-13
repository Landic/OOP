#pragma once
#include "Vehicle.h"
class Bus : public Vehicle
{
	int passenger;
	int passenger_max;
public:
	Bus() = default;
	Bus(int value_passenger, int value_passenger_max, double value_fuel, double value_fuel_tank_volume);
	void Init();
	void Show();
	int Get_Passenger_Max();
	int Get_Passenger();
	void Arrive();
	void Leave();
};

