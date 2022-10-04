#pragma once
#include "Transport.h"
class Bike : public Transport
{
	short number_gears;
public:
	Bike() = default;
	Bike(int value_year, string value_model, short value_number_gears);
	void Show() const;
	void Init();
};

