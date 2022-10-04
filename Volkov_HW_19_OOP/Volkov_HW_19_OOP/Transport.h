#pragma once
#include <iostream>

using namespace std;

class Transport
{
protected:
	float fuel_volum;
	int year;
	string model;
public:
	Transport() = default;
	Transport(float value_fuel_volum, int value_year, string value_model);
	Transport(int value_year, string value_model);
	virtual void Init();
	void SetTransport(const float value_fuel_volum, const string value_model, const int value_year);
	virtual void Show() const;
};

