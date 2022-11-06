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
	void Borrow_Weak_Computer(AdminComputerClub& obj); // метод занять пк
	void Borrow_Average_Computer(AdminComputerClub& obj); // метод занять пк
	void Borrow_Powerful_Computer(AdminComputerClub& obj); // метод занять пк
	void Release_The_Weak_Computer(AdminComputerClub& obj); // метод освободить пк
	void Release_The_Average_Computer(AdminComputerClub& obj); // метод освободить пк
	void Release_The_Powerful_Computer(AdminComputerClub& obj); // метод освободить пк
};
