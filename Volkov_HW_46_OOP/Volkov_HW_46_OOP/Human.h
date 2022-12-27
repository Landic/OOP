#pragma once
#include "Members.h"
class Human :public Members
{
public:
	Human() = default;
	Human(string value_name, int value_jump, int value_run);
	void Print();
	void Output();
	string Get_Name();
	short Get_Checking_Wall();
	int Get_Jump();
	short Get_Checking_Traidmail();
	int Get_Run();
	void Set_Checking_Wall(short value_checking_wall);
	void Set_Checking_Traidmail(short value_checking_traidmail);
};

