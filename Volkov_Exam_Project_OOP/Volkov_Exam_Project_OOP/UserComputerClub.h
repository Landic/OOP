#pragma once
#include "ComputerClub.h"
#include <iostream>
#include <fstream>
#include "AdminComputerClub.h"
using namespace std;
class UserComputerClub : public ComputerClub
{
public:
	UserComputerClub(); // конструктор по умолчанию
	void Output(); // метод вывода
	void Borrow_Computer(short hour, short choose, AdminComputerClub& obj); // метод занять пк
	void Release_The_Computer(short choose, AdminComputerClub& obj); // метод освободить пк
};
