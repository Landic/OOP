#include "Square.h"
#include <iostream>

using namespace std;

Square::Square(double value_side)
{
	side = value_side;
}

void Square::Input()
{
	cout << "Enter side" << endl;
	cout << "Enter... ";
	cin >> side;
}

void Square::Output()
{
	cout << "Side = " << side << endl;
}
