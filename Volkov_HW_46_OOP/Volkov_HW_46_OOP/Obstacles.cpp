#include "Obstacles.h"

Obstacles::Obstacles(int value_length, string value_name_obstacles)
{
	length = value_length;
	name_obstacles = value_name_obstacles;
}

void Obstacles::Print()
{
}

int Obstacles::Get_Length()
{
	return length;
}

string Obstacles::Get_Name_Obstacles()
{
	return string();
}

void Obstacles::Check(Members*& obj)
{
}
