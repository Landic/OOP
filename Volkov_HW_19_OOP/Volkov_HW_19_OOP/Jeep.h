#pragma once
#include "Transport.h"
class Jeep : public Transport
{
	string drive_unit;
public:
	Jeep() = default;
	Jeep(float value_fuel_volum, int value_year, string value_model, string value_drive_unit);
	void Show() const;
	void Init();
};

