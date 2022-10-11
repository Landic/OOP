#pragma once
#include "Transport.h"
namespace vessel {
	class Vessel : public transport::Transport
	{
		char* type_vessel;
	public:
		Vessel() = default;
		Vessel(float value_fuel_volum, int value_year, char* value_model, char* value_type_vessel);
		void Show() const;
		void Init();
		~Vessel();
	};
}
