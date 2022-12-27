#pragma once
#include <iostream>
#include <string>

using namespace std;

class Members
{
protected:
	string name;
	int jump;
	int run;
	short checking_wall;
	short checking_traidmail;
public:
	Members() = default;
	Members(string value_name, int value_jump, int value_run);
	virtual void Print();
	virtual void Output();
	virtual string Get_Name();
	virtual short Get_Checking_Wall();
	virtual short Get_Checking_Traidmail();
	virtual int Get_Jump();
	virtual int Get_Run();
	virtual void Set_Checking_Wall(short value_checking_wall);
	virtual void Set_Checking_Traidmail(short value_checking_traidmail);
};

