#pragma once
#include "Obstacles.h"
class Treadmill :public Obstacles
{
public:
	Treadmill() = default;
	Treadmill(int value_length, string value_name_obstacles);
	void Print();
	string Get_Name_Obstacles();
	int Get_Length();
	void Check(Members*& obj);
};

