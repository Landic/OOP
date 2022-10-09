#include "Fox.h"

Fox::Fox(int value_col) : Animal(value_col)
{
}

void Fox::Init()
{
	Animal::Init();
}

void Fox::Show()
{
	if (life) {
		cout << "Amount fox: " << col << endl;
		cout << "Area: " << area << endl;
		cout << "Maximum age: " << maximum_age_fox << endl;
		if (col != 0) {
			cout << "Their age" << endl;
			age.Print();
		}
	}
	else {
		cout << "Fox died" << endl;
	}
}

void Fox::Balance(int value)
{
	while (col > value) {
		age.Del(col);
		col--;
	}
}

int Fox::Get_Count()
{
	return age.GetCount();
}
