#pragma once
#include "Transport.h"
class Truck : public Transport
{
	string cargo_type;
public:
	Truck() = default;
	Truck(float value_fuel_volum, int value_year, string value_model, string value_cargo_type);
	void Show() const;
	void Init();
};

