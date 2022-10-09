#pragma once
#include "Animal.h"
class Fox : public Animal
{
public:
	Fox() = default;
	Fox(int value_col);
	void Init();
	void Show();
	void Balance(int value);
	int Get_Count();
};

