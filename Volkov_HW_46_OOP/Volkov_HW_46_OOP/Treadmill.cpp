#include "Treadmill.h"

Treadmill::Treadmill(int value_length, string value_name_obstacles)
{
	length = value_length;
	name_obstacles = value_name_obstacles;
}


void Treadmill::Print()
{
	cout << "Enter length treadmill" << endl;
	cout << "Enter -> ";
	cin >> length;
	system("cls");
}

string Treadmill::Get_Name_Obstacles()
{
	return name_obstacles;
}

int Treadmill::Get_Length()
{
	return length;
}

void Treadmill::Check(Members*& obj)
{
	if (obj->Get_Run() > length) {
		cout << obj->Get_Name() << " Particant passed this test treadmill" << endl;
		obj->Set_Checking_Traidmail(1);
	}
	else {
		cout << obj->Get_Name() << " Particant not passed this test" << endl;
		obj->Set_Checking_Traidmail(0);
	}
}
