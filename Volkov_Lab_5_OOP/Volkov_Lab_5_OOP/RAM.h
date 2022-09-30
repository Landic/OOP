#pragma once
#include <iostream>
#include <string>

using namespace std;

class RAM
{
	string model;
	short memory;
public:
	RAM();
	RAM(string value_model, short value_memory);
	void Show();
};

