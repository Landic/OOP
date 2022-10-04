#pragma once
#include "Transport.h"
class Vessel : public Transport
{
	string type_vessel;
public:
	Vessel() = default;
	Vessel(float value_fuel_volum, int value_year, string value_model, string value_type_vessel);
	void Show() const;
	void Init();
};

