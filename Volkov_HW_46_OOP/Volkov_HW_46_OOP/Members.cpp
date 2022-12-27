#include "Members.h"

Members::Members(string value_name, int value_jump, int value_run)
{
	name = value_name;
	jump = value_jump;
	run = value_run;
}

void Members::Print()
{

}

void Members::Output()
{

}

string Members::Get_Name()
{
	return 0;
}

short Members::Get_Checking_Wall()
{
	return 0;
}

short Members::Get_Checking_Traidmail()
{
	return 0;
}

int Members::Get_Jump()
{
	return 0;
}

int Members::Get_Run()
{
	return 0;
}

void Members::Set_Checking_Wall(short value_checking_wall)
{
	checking_wall = value_checking_wall;
}

void Members::Set_Checking_Traidmail(short value_checking_traidmail)
{
	checking_traidmail = value_checking_traidmail;
}
