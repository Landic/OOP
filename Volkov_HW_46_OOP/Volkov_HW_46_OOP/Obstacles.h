#pragma once
#include <iostream>
#include <string>
#include "Members.h"

using namespace std;
class Obstacles
{
protected:
	int length;
	string name_obstacles;
public:
	Obstacles() = default;
	Obstacles(int value_length, string value_name_obstacles);
	virtual void Print();
	virtual int Get_Length();
	virtual string Get_Name_Obstacles();
	virtual void Check(Members*& obj);
};

