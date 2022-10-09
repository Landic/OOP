#pragma once
#include "List.h"
class Animal
{
protected:
	int maximum_age_fox;
	int maximum_age_rabbit;
	int col;
	List<int> age;
	string area;
	bool life;
public:
	Animal();
	Animal(int value_col);
	virtual void Init();
	virtual void Show() = 0;
	virtual void Area();
	~Animal();
	virtual string Get_Area();
};

