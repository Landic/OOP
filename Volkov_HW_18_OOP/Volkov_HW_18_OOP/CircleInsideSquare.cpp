#include "CircleInsideSquare.h"

CircleInsideSquare::CircleInsideSquare(double value_rad, double value_side):Circle(value_rad), Square(value_side)
{
}

bool CircleInsideSquare::Check()
{
	if (rad < side / 2) {
		return true;
	}
	return false;
}
