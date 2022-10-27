#pragma once
#include "Login.h"
#include <iostream>
using namespace std;
class LoginForAdmin : Login
{
public:
	bool Login_In_System(); // метод входа
	void Register(); // метод регистрации
	string Get_Login(); // геттер
};

