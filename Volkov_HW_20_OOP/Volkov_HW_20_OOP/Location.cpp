#include "Location.h"
#include <iostream>

using namespace std;

Location::Location(int value_grass, Fox* value_fox, Rabbit* value_rabbit) : fox(value_fox), rabbit(value_rabbit)
{
	grass = value_grass;
}

void Location::Init()
{
	cout << "Enter amount grass" << endl;
	cout << "Enter... ";
	cin >> grass;
	system("cls");
}

void Location::Show()
{
	cout << "Amount grass" << grass << endl;
}

void Location::Life(Fox& value_fox, Rabbit& value_bunny)
{
	if (value_fox.Get_Area() == value_bunny.Get_Area()) {
		fox->Balance(5);
		if (fox->Get_Count() >= rabbit->Get_Count()) {
			rabbit->Balance(0);
		}
		else {
			rabbit->Balance(rabbit->Get_Count() - fox->Get_Count());
			if (grass > rabbit->Get_Count()) {
				grass - rabbit->Get_Count();
			}
			else {
				grass = 0;
			}
		}
	}
	else {
		if (grass == 0) {
			rabbit->Balance(0);
		}
		else {
			if (grass > rabbit->Get_Count()) {
				grass - rabbit->Get_Count();
			}
			else {
				grass = 0;
			}
		}
	}
	fox->Show();
	rabbit->Show();
	cout << "Grass: " << grass << endl;
}
