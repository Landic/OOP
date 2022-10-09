#pragma once
#include "Animal.h"
class Rabbit : public Animal
{
public:
	Rabbit() = default;
	Rabbit(int value_col);
	void Init();
	void Show();
	void Balance(int value);
	int Get_Count();
};

