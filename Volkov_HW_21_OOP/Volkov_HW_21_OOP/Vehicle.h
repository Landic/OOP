#pragma once
#include "Base.h"

class Vehicle
{
protected:
	Base obj;
	double fuel;
	double fuel_tank_volume;
public:
	Vehicle() = default; // constructor by default
	Vehicle(double value_fuel, double value_fuel_tank_volume); // constructor by parametres
	virtual void Init(); // virtual method init
	virtual void Show(); // virtual method show
	virtual void Arrive() = 0; // purely virtual method arrive to base
	virtual void Leave() = 0; // purely virtual method leave to base
};

