#pragma once
#include <iostream>
#include "Fox.h"
#include "Rabbit.h"
class Location
{
	int grass;
	Fox* fox;
	Rabbit* rabbit;
public:
	Location() = default;
	Location(int value_grass, Fox* value_fox, Rabbit* rabbit);
	void Init();
	void Show();
	void Life(Fox& value_fox, Rabbit& value_bunny);
};

