#include <iostream>
#include "Members.h"
#include "Obstacles.h"
#include "Cat.h"
#include "Human.h"
#include "Robot.h"
#include "Wall.h"
#include "Treadmill.h"
#include <vector>

using namespace std;

int main() {
	Members* arr_members[] = { new Cat("Vasya_Cat", 30, 40), new Human("Obama", 20, 70), new Robot("Robot3000", 100, 100), new Human("Baiden", 10,50)};
	Obstacles* arr_obstacles[] = { new Wall(25, "Wall"), new Treadmill(45, "Treadmill")};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++) {
			arr_obstacles[j]->Check(arr_members[i]);
		}
	}
	cout << "--------------------------------------------------------" << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (arr_obstacles[j]->Get_Name_Obstacles() == "Wall") {
				if (arr_members[i]->Get_Checking_Wall() == 1) {
					cout << "Name " << arr_members[i]->Get_Name() << " passed " << arr_obstacles[j]->Get_Name_Obstacles() << " length " << arr_obstacles[j]->Get_Length() << endl;
					cout << "--------------------------------------------------------" << endl;
				}
				else {
					cout << "Name " << arr_members[i]->Get_Name() << " not passed " << arr_obstacles[j]->Get_Name_Obstacles() << " length " << arr_obstacles[j]->Get_Length() << endl;
					cout << "--------------------------------------------------------" << endl;
				}
			}
			else if (arr_obstacles[j]->Get_Name_Obstacles() == "Treadmill") {
				if (arr_members[i]->Get_Checking_Traidmail() == 1) {
					cout << "Name " << arr_members[i]->Get_Name() << " passed " << arr_obstacles[j]->Get_Name_Obstacles() << " length " << arr_obstacles[j]->Get_Length() << endl;
					cout << "--------------------------------------------------------" << endl;
				}
				else {
					cout << "Name " << arr_members[i]->Get_Name() << " not passed " << arr_obstacles[j]->Get_Name_Obstacles() << " length " << arr_obstacles[j]->Get_Length() << endl;
					cout << "--------------------------------------------------------" << endl;
				}
			}
		}
	}
}