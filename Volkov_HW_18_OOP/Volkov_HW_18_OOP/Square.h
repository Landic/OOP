#pragma once
class Square
{
protected:
	double side;
public:
	Square() = default;
	Square(double value_side);
	void Input();
	void Output();
};

