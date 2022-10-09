#include "Rabbit.h"

Rabbit::Rabbit(int value_col):Animal(value_col)
{
}

void Rabbit::Init()
{
	Animal::Init();
}

void Rabbit::Show()
{
	if (life) {
		cout << "Amount fox: " << col << endl;
		cout << "Area: " << area << endl;
		cout << "Maximum age: " << maximum_age_rabbit << endl;
		if (col != 0) {
			cout << "Their age" << endl;
			age.Print();
		}
	}
	else {
		cout << "Rabbit died" << endl;
	}
}

void Rabbit::Balance(int value)
{
	while (col > value) {
		age.Del(col);
		col--;
	}
}

int Rabbit::Get_Count()
{
	return age.GetCount();
}
