#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{
	double max_load;
	double curent;
public:
	Truck() = default; // constructor by default
	Truck(double value_max_load, double value_curent, double value_fuel, double value_fuel_volume_tank); // constructor by parametres
	void Init(); // method init
	void Show(); // method show
	// accessors
	double Get_Max_Load();
	double Get_Curent();

	void Arrive(); // method arrive to base
	void Leave(); // method leave to base
};

