#pragma once
class Circle
{
protected:
	double rad;
public:
	Circle() = default; // constructor by default
	Circle(double value_rad); // constructor by parametres
	void Input();
	void Output();
};

