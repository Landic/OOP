#pragma once
#include <iostream>
using namespace std;
class Login
{
protected:
	string login; 
	string password;
	string login_checker;
	string password_checker;
	string login_correct;
	string password_correct;
public:
	Login() = default;
	virtual bool Login_In_System() = 0; // чисто вирутальный метод входа
	virtual void Register() = 0; // чисто виртуальный метод регистрации
	virtual string Get_Login() = 0; // геттер чисто виртуальный
};

