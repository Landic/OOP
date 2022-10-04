#include "CircleInsideSquare.h"

CircleInsideSquare::CircleInsideSquare(double value_rad, double value_side):Circle(value_rad), Square(value_side)
{
}

bool CircleInsideSquare::Check()
{
	if (rad < side / 2) { // check circle inside or not
		return true; // circle inside return true
	}
	return false; // return false circle not inside square
}
