#pragma once
#include "Transport.h"
namespace truck{
	class Truck : public transport::Transport
	{
		char* cargo_type;
	public:
		Truck() = default;
		Truck(float value_fuel_volum, int value_year, char* value_model, char* value_cargo_type);
		void Show() const;
		void Init();
		~Truck();
};
}
