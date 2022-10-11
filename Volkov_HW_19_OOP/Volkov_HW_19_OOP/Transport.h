#pragma once
#include <iostream>

using namespace std;

namespace transport {
	class Transport
	{
	protected:
		float fuel_volum;
		int year;
		char* model;
	public:
		Transport() = default;
		Transport(float value_fuel_volum, int value_year, char* value_model);
		Transport(int value_year, char* value_model);
		virtual void Init();
		void SetTransport(const float value_fuel_volum, const char* value_model, const int value_year);
		virtual void Show() const;
		virtual ~Transport() = 0;
	};
}
