#pragma once
class Square
{
protected:
	double side;
public:
	Square() = default; // constructor by default
	Square(double value_side); // constructor by parametres
	void Input();
	void Output();
};

