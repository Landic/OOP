#pragma once
#include "Circle.h"
#include "Square.h"

class CircleInsideSquare : public Circle, public Square
{
public:
	CircleInsideSquare() = default;
	CircleInsideSquare(double value_rad, double value_side);
	bool Check();
};

