#include "Animal.h"

Animal::Animal()
{
	col = 0;
	maximum_age_fox = 5;
	maximum_age_rabbit = 6;
}

Animal::Animal(int value_col)
{
	col = value_col;
	maximum_age_fox = 5;
	maximum_age_rabbit = 6;
}

void Animal::Init()
{
	cout << "Enter amount animals" << endl;
	cout << "Enter... ";
	cin >> col;
	system("cls");
	for (int i = 0; i < col; i++)
	{
		int temp = 0;
		cout << "Enter age" << i + 1 << endl;
		cout << "Animals" << endl;
		cout << "Enter... ";
		cin >> temp;
		age.AddTail(temp);
	}
	system("cls");
	this->Area();
}

void Animal::Area()
{
	int choose;
	while (true) {
		char menu_area[] = "1. Forest\n2. Field\n3. Steppe\n4. Dessert\n 5. Jungle\n";
		cout << menu_area;
		cout << "Enter... ";
		cin >> choose;
		switch (choose)
		{
		case 1:
			area = "Forest";
			break;
		case 2:
			area = "Field";
			break;
		case 3:
			area = "Steppe";
			break;
		case 4:
			area = "Dessert";
			break;
		case 5:
			area = "Jungle";
			break;
		default:
			cout << "Error choose! Try again" << endl;
			system("cls");
			continue;
		}
		break;
	}
}

Animal::~Animal()
{
}

string Animal::Get_Area()
{
	return area;
}
