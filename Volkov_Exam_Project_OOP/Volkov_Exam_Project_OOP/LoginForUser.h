#pragma once
#include "Login.h"
#include <iostream>
using namespace std;
class LoginForUser : public Login
{
public:
	bool Login_In_System(); // метод входа в систему
	void Register(); // метод регистрации в систему
	string Get_Login(); // геттер
};

