#pragma once
class Circle
{
protected:
	double rad;
public:
	Circle() = default;
	Circle(double value_rad);
	void Input();
	void Output();
};

