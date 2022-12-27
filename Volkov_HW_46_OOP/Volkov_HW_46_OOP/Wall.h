#pragma once
#include "Obstacles.h"
class Wall : public Obstacles
{
public:
	Wall() = default;
	Wall(int value_length, string value_name_obstacles);
	int Get_Length();
	void Print();
	string Get_Name_Obstacles();
	void Check(Members*& obj);
};

