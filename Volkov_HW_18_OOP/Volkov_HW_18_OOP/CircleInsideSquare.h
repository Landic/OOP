#pragma once
#include "Circle.h"
#include "Square.h"

class CircleInsideSquare : public Circle, public Square
{
public:
	CircleInsideSquare() = default; // constructor default
	CircleInsideSquare(double value_rad, double value_side); // constructor by parametres
	bool Check(); // method check circle in square
};

