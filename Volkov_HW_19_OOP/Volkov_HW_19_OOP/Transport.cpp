#include "Transport.h"
#include <iostream>

using namespace std;

Transport::Transport(float value_fuel_volum, int value_year, string value_model)
{
	fuel_volum = value_fuel_volum;
	year = value_year;
	model = value_model;
}

Transport::Transport(int value_year, string value_model)
{
	year = value_year;
	model = value_model;
}


void Transport::SetTransport(const float value_fuel_volum, const string value_model, const int value_year)
{
	fuel_volum = value_fuel_volum;
	model = value_model;
	year = value_year;
}

