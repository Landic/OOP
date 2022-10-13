#include "Base.h"
#include <iostream>

using namespace std;

void Base::Init()
{
	cout << "Enter people on base" << endl;
	cout << "Enter... ";
	cin >> people_on_base;
	system("cls");
	cout << "Enter vehicles on base" << endl;
	cout << "Enter... ";
	cin >> vehicles_on_base;
	system("cls");
	cout << "Enter petrol on base" << endl;
	cout << "Enter... ";
	cin >> petrol_on_base;
	system("cls");
	cout << "Enter goods on base" << endl;
	cout << "Enter... ";
	cin >> goods_on_base;
	system("cls");
}

void Base::Show()
{
	cout << "People on base: " << people_on_base << endl;
	cout << "Vehicles on base: " << vehicles_on_base << endl;
	cout << "Petrol on base: " << petrol_on_base << " Litlers" << endl;
	cout << "Goods on base: " << goods_on_base << " KG" << endl;
}

int Base::Get_People_On_Base()
{
	return people_on_base;
}

void Base::Set_People_On_Base(int value_people_on_base)
{
	people_on_base = value_people_on_base;
}

int Base::Get_Vehicles_On_Base()
{
	return vehicles_on_base;
}

void Base::Set_Vehicles_On_Base(int value_vehicles_on_base)
{
	vehicles_on_base = value_vehicles_on_base;
}

double Base::Get_Petrol_On_Base()
{
	return petrol_on_base;
}

void Base::Set_Petrol_On_Base(double value_petrol_on_base)
{
	petrol_on_base = value_petrol_on_base;
}

double Base::Get_Goods_On_Base()
{
	return goods_on_base;
}

void Base::Set_Goods_On_Base(double value_goods_on_base)
{
	goods_on_base = value_goods_on_base;
}
