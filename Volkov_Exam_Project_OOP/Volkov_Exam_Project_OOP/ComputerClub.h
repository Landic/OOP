#pragma once
#include <vector>
using namespace std;
class ComputerClub
{
protected:
	vector<bool> weak_computer; // логический вектор
	vector<bool> average_computer; // логический вектор
	vector<bool> powerful_computer; // логический вектор
	float balance;
	bool busy;
public:
	ComputerClub(); // конструктор по умолчанию
	virtual void Output() = 0; // чисто виртуальный метод вывода
};

