#pragma once
#include "Transport.h"
namespace bike {
	class Bike : public transport::Transport
	{
		short number_gears;
		char* type_brake;
	public:
		Bike() = default;
		Bike(int value_year, char* value_model, short value_number_gears, char* value_type_brake);
		void Show() const;
		void Init();
		~Bike();
	};

}