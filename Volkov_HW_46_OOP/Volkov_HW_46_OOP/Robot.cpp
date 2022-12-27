#include "Robot.h"
#include <iostream>

using namespace std;

Robot::Robot(string value_name, int value_jump, int value_run)
{
	name = value_name;
	jump = value_jump;
	run = value_run;
}

void Robot::Print()
{
	cout << "Enter name" << endl;
	cout << "Enter -> ";
	cin >> name;
	system("cls");
	cout << "Enter maximum length to jump" << endl;
	cout << "Enter -> ";
	cin >> jump;
	system("cls");
	cout << "Enter maximum run" << endl;
	cout << "Enter -> ";
	cin >> run;
	system("cls");
}

void Robot::Output()
{
	cout << "Name -> " << name << endl;
	cout << "Jump lenth -> " << jump << endl;
	cout << "Run length -> " << run << endl;
}

string Robot::Get_Name()
{
	return name;
}

short Robot::Get_Checking_Wall()
{
	return checking_wall;
}

short Robot::Get_Checking_Traidmail()
{
	return checking_traidmail;
}

int Robot::Get_Jump()
{
	return jump;
}

int Robot::Get_Run()
{
	return run;
}

void Robot::Set_Checking_Wall(short value_checking_wall)
{
	checking_wall = value_checking_wall;
}

void Robot::Set_Checking_Traidmail(short value_checking_traidmail)
{
	checking_traidmail = value_checking_traidmail;
}
