#include "LoginForAdmin.h"
#include <iostream>
#include <fstream>

using namespace std;

bool LoginForAdmin::Login_In_System() // метод входа в систему
{
	login = "login_admin.txt"; 
	password = "password_admin.txt";
	fstream login_file;
	fstream password_file;
	login_file.open(login, fstream::in | fstream::out | fstream::app);  
	password_file.open(password, fstream::in | fstream::out | fstream::app);
	if (!login_file.is_open() && !password_file.is_open()) {
		cout << "Error!" << endl;
	}
	else {
		while (!login_file.eof()) {
			login_checker = "";
			login_file >> login_checker; // запись логина в файл
		}
		while (!password_file.eof()) {
			password_checker = "";
			password_file >> password_checker; // запись в файл пароля 
		}
		for (int i = 0; i < 3; i++)
		{
			cout << "Enter your login" << endl; 
			cout << "Enter... ";
			cin >> login_correct;
			system("cls");
			cout << "Enter your password" << endl;
			cout << "Enter... ";
			cin >> password_correct;
			if (login_correct != login_checker || password_correct != password_checker) { // проверка на корректность ввода
				cout << "Password or login uncorrect attempt " << i + 1 << endl;
				if (i == 3) {
					return false;  // если с трех попыток не получилось войти то возвращает не истину
				}
			}
			else {
				cout << "Login completed" << endl;
				return true; // зашел вовзращает истину
			}
		}
	}
}

void LoginForAdmin::Register()
{
	login = "login_admin.txt";
	password = "password_admin.txt";
	fstream login_file;
	fstream password_file;
	login_file.open(login, fstream::in | fstream::out | fstream::app);
	password_file.open(password, fstream::in | fstream::out | fstream::app);
	if (!login_file.is_open() && !password_file.is_open()) {
		cout << "Error!" << endl;
	}
	else {
		cout << "Enter login" << endl;
		cout << "Enter... ";
		cin >> login_checker;
		system("cls");
		cout << "Enter password" << endl;
		cout << "Enter... ";
		cin >> password_checker;
		system("cls");
		login_file << login_checker; // записывается в файл логин
		password_file << password_checker; // записывается в файл пароль
		cout << "Register succsesful!" << endl;
	}
}

string LoginForAdmin::Get_Login()
{
	return login;
}
