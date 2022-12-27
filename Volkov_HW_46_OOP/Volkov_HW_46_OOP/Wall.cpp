#include "Wall.h"

Wall::Wall(int value_length, string value_name_obstacles)
{
	length = value_length;
	name_obstacles = value_name_obstacles;
}

int Wall::Get_Length()
{
	return length;
}

void Wall::Print()
{
	cout << "Enter length wall" << endl;
	cout << "Enter -> ";
	cin >> length;
	system("cls");
}

string Wall::Get_Name_Obstacles()
{
	return name_obstacles;
}

void Wall::Check(Members*& obj)
{
	if (obj->Get_Jump() > length) {
		cout << obj->Get_Name() << " passed this test wall" << endl;
		obj->Set_Checking_Wall(1);
	}
	else {
		cout << obj->Get_Name() << " Particant not passed this test" << endl;
		obj->Set_Checking_Wall(0);
	}
}
