#include "AdminComputerClub.h"
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <vector>

using namespace std;

AdminComputerClub::AdminComputerClub()
{
	balance = 3000;
	profit = 0;
}

void AdminComputerClub::Buy_Computer(short choose)
{
	if (choose == 1) {
		if (balance < 450) { // если баланс меньше стоимости компьютера то на экран выведется сообщение
			cout << " -----------------------------------------" << endl;
			cout << "|You dont have money to buy this computer!|" << endl;
			cout << " -----------------------------------------" << endl;
			Sleep(1000);
			system("cls");
		}
		else if(weak_computer.size() == 3){ // если больше 3 слабых компьютеров то ошибка максимум можно купить 3
			cout << " ----------------------------------------------" << endl;
			cout << "|You can not buy more than three weak computers|" << endl;
			cout << " ----------------------------------------------" << endl;
			Sleep(1000);
			system("cls");
		}
		else { // если все нормально срабатывает блок кода ниже
			cout << " ---------" << endl;
			cout << "|Buying...|" << endl;
			cout << " ---------" << endl;
			balance -= 450;
			weak_computer.push_back(0);
			Sleep(1000);
			system("cls");
		}
	}
	if (choose == 2) {
		if (balance < 900) { // если баланс меньше стоимости ошибка
			cout << " -----------------------------------------" << endl;
			cout << "|You dont have money to buy this computer!|" << endl;
			cout << " -----------------------------------------" << endl;
			Sleep(1000);
			system("cls");
		}
		else if (average_computer.size() == 2) { // если уже куплено 2 средних компьютера то ошибка максимум можно 2
			cout << " ---------------------------------------------" << endl;
			cout << "|You can't buy more than two average computers|" << endl;
			cout << " ---------------------------------------------" << endl;
			Sleep(1000);
			system("cls");
		}
		else { // если все нормально срабатывает блок ниже
			cout << " ---------" << endl;
			cout << "|Buying...|" << endl;
			cout << " ---------" << endl;
			balance -= 900;
			average_computer.push_back(0);
			Sleep(1000);
			system("cls");
		}
	}
	if (choose == 3) { 
		if (balance < 1500) { // если баланс меньше стоимости ошибка
			cout << " -----------------------------------------" << endl;
			cout << "|You dont have money to buy this computer!|" << endl;
			cout << " -----------------------------------------" << endl;
			Sleep(1000);
			system("cls");
		}
		else if (powerful_computer.size() == 1) { // если уже куплено 1 мощный компьютер то ошибка максимум можно 2
			cout << " -----------------------------------------------" << endl;
			cout << "|You can not buy more than one powerful computer|" << endl;
			cout << " -----------------------------------------------" << endl;
			Sleep(1000);
			system("cls");
		}
		else { // если все нормально срабатывает блок ниже
			cout << " ---------" << endl;
			cout << "|Buying...|" << endl;
			cout << " ---------" << endl;
			balance -= 1500;
			powerful_computer.push_back(0);
			Sleep(1000);
			system("cls");
		}
	}
}


void AdminComputerClub::Output()
{
	string login;
	fstream login_file;
	login_file.open("login_admin.txt", fstream::in | fstream::out | fstream::app); // открываем файл с логином
	if (!login_file.is_open()) { // если не открывается ошибка
		cout << "Error!" << endl;
	}
	else {
		while (!login_file.eof()) { // считываем логин и записываем в строку для вывода на экран
			login = "";
			login_file >> login;
		}
	}
	login_file.close();
	cout << " --------------------------" << endl;
	cout << "|Login: " << login<< "                 |" << endl;
	cout << "|--------------------------|" << endl;
	cout << "|Your balance: " << balance <<"        |" << endl;
	cout << "|--------------------------|" << endl;
	cout << "|Profit for all time: " << profit << "    |" << endl;
	cout << "|--------------------------|" << endl;
	cout << "|Weak computer count: " << weak_computer.size() << "    |" << endl;
	cout << "|--------------------------|" << endl;
	cout << "|Middle computer count: " << average_computer.size() << "  |" << endl;
	cout << "|--------------------------|" << endl;
	cout << "|Powerful computer count: " << powerful_computer.size() << "|" << endl;
	cout << " --------------------------" << endl;
}

void AdminComputerClub::Sell_Computer(short choose)
{
	if (choose == 1) {
		if (weak_computer.size() == 0) { // если нету компьютеров и продать их выдаст ошибка
			cout << " ----------------" << endl;
			cout << "|Not availability|" << endl;
			cout << " ----------------" << endl;
			Sleep(1000);
			system("cls");
		}
		else { // если все нормально продается один пк из 3 и прибавляется половина суммы
			cout << " ----------" << endl;
			cout << "|Selling...|" << endl;
			cout << " ----------" << endl;
			balance += 250;
			weak_computer.erase(weak_computer.end() - 1);
			Sleep(1000);
			system("cls");
		}
	}
	if (choose == 2) {
		if (average_computer.size() == 0) {  // если нету компьютеров и продать их выдаст ошибка
			cout << " ----------------" << endl;
			cout << "|Not availability|" << endl;
			cout << " ----------------" << endl;
			Sleep(1000);
			system("cls");
		}
		else { // если все нормально продается один пк из 2 и прибавляется половина суммы
			cout << " ----------" << endl;
			cout << "|Selling...|" << endl;
			cout << " ----------" << endl;
			balance += 400;
			average_computer.erase(average_computer.end() - 1);
			Sleep(1000);
			system("cls");
		}
	}
	if (choose == 3) { // если нету компьютеров и продать их выдаст ошибка
		if (powerful_computer.size() == 0) {
			cout << " ----------------" << endl;
			cout << "|Not availability|" << endl;
			cout << " ----------------" << endl;
			Sleep(1000);
			system("cls");
		}
		else { // если все нормально продается один пк из 1 и прибавляется половина суммы
			cout << " ----------" << endl;
			cout << "|Selling...|" << endl;
			cout << " ----------" << endl;
			balance += 750;
			powerful_computer.erase(powerful_computer.end() - 1);
			Sleep(1000);
			system("cls");
		}
	}
}

void AdminComputerClub::Computer_Is_Busy()
{
	short count = 0; // счетчик
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); // для цвета в консоли
	SetConsoleTextAttribute(hStdOut, 9);
	// Объяснение снизу в консоли
	cout << " ----------------------" << endl;
	cout << "|0 - it's not busy PC  |" << endl;
	cout << "|----------------------|" << endl;
	cout << "|1 - it's busy PC      |" << endl;
	cout << "|----------------------|" << endl;
	SetConsoleTextAttribute(hStdOut, 2);
	cout << "|All weak computers:   |" << endl;
	for (vector<bool>::iterator i = weak_computer.begin(); i != weak_computer.end(); i++) 
	{
		// вывод все слабых компьютеров если 0 то он свободен если 1 то занят и его занять еще раз нельзя
		count++; // счетчик
		cout << "|----------------------|" << endl;
		cout << "|" << count << " weak computer " << *i << "     |" << endl;
		cout << "|----------------------|" << endl;
	}
	SetConsoleTextAttribute(hStdOut, 5);
	count = 0;  // обнуляем счетчик
	cout << "|All average computers:|" << endl;
	for (vector<bool>::iterator i = average_computer.begin(); i != average_computer.end(); i++)
	{
		// вывод все слабых компьютеров если 0 то он свободен если 1 то занят и его занять еще раз нельзя
		count++; // счетчик количества компьютеров
		cout << "|----------------------|" << endl;
		cout << "|" << count << " average computer " << *i << "  |" << endl;
		cout << "|----------------------|" << endl;
	}
	SetConsoleTextAttribute(hStdOut, 12);
	count = 0;
	cout << "|All powerful computer:|" << endl;
	for (vector<bool>::iterator i = powerful_computer.begin(); i != powerful_computer.end(); i++)
	{
		// вывод все слабых компьютеров если 0 то он свободен если 1 то занят и его занять еще раз нельзя
		count++; // счетчик количества компьютеров
		cout << "|----------------------|" << endl;
		cout << "|" << count << " powerful_computer " << *i << " |" << endl;
		cout << "|----------------------|" << endl;
	}
}


// аксессоры
int AdminComputerClub::Get_Weak_Computer_Size()
{
	return weak_computer.size();
}

int AdminComputerClub::Get_Average_Computer_Size()
{
	return average_computer.size();
}

int AdminComputerClub::Get_Powerful_Computer_Size()
{
	return powerful_computer.size();
}

float AdminComputerClub::Get_Balance()
{
	return balance;
}

float AdminComputerClub::Get_Profit()
{
	return profit;
}

void AdminComputerClub::Set_Balance(float value_balance)
{
	balance = value_balance;
}

void AdminComputerClub::Set_Profit(float value_profit)
{
	profit = value_profit;
}

int AdminComputerClub::Get_Weak_Computer_Index(int index)
{
	return weak_computer[index];
}

int AdminComputerClub::Get_Average_Computer_Index(int index)
{
	return average_computer[index];
}

int AdminComputerClub::Get_Powerful_Computer_Index(int index)
{
	return powerful_computer[index];
}

void AdminComputerClub::Set_Weak_Computer_Index(int index, int true_false)
{
	weak_computer[index] = true_false;
}

void AdminComputerClub::Set_Average_Computer_Index(int index, int true_false)
{
	average_computer[index] = true_false;
}

void AdminComputerClub::Set_Powerful_Computer_Index(int index, int true_false)
{
	powerful_computer[index] = true_false;
}
