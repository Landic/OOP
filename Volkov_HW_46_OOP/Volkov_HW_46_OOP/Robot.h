#pragma once
#include "Members.h"
class Robot :public Members
{
public:
	Robot() = default;
	Robot(string value_name, int value_jump, int value_run);
	void Print();
	void Output();
	string Get_Name();
	short Get_Checking_Wall();
	short Get_Checking_Traidmail();
	int Get_Jump();
	int Get_Run();
	void Set_Checking_Wall(short value_checking_wall);
	void Set_Checking_Traidmail(short value_checking_traidmail);
};

