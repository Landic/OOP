#pragma once
#include "Transport.h"
class Plane : public Transport
{
	float mass;
public:
	Plane() = default;
	Plane(float value_fuel_volum, int value_year, string value_model, float value_mass);
	void Show()const;
	void Init();
};

