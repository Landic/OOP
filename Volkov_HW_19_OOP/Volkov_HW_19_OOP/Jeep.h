#pragma once
#include "Transport.h"
namespace jeep {
	class Jeep : public transport::Transport
	{
		char* drive_unit;
	public:
		Jeep() = default;
		Jeep(float value_fuel_volum, int value_year, char* value_model, char* value_drive_unit);
		void Show() const;
		void Init();
		~Jeep();
	};
}
