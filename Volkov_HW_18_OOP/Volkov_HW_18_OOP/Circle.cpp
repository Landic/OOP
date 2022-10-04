#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle(double value_rad) // constructor by parametres
{
	rad = value_rad;
}

void Circle::Input()
{
	cout << "Enter radius" << endl;
	cout << "Enter... ";
	cin >> rad;
	system("Cls");
}

void Circle::Output()
{
	cout << "Radius = " << rad << endl;
}
