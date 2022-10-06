#pragma once
#include "Transport.h"
class Plane : public Transport
{
	float mass;
	char* type_engine;
public:
	Plane() = default;
	Plane(float value_fuel_volum, int value_year, char* value_model, float value_mass, char* value_type_engine);
	void Show()const;
	void Init();
	~Plane();
};

