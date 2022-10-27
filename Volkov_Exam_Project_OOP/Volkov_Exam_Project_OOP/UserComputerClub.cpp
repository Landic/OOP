#include "UserComputerClub.h"
#include "AdminComputerClub.h"
#include <fstream>
#include <iostream>
#include <Windows.h>

using namespace std;

UserComputerClub::UserComputerClub() // коснтруктор по умолчанию
{
	balance = 1000;
}

void UserComputerClub::Output() // метод вывода
{
	string login;
	fstream login_file;
	login_file.open("login_user.txt", fstream::in | fstream::out | fstream::app);
	if (!login_file.is_open()) { // проверка на открытие файла
		cout << " ------" << endl;
		cout << "|Error!|" << endl;
		cout << " ------" << endl;
	}
	else {
		while (!login_file.eof()) {
			login = "";
			login_file >> login; // запись из файла в строку для вывода логина
		}
	}
	login_file.close();
	cout << "Login: " << login << endl;
	cout << "Your balance: " << balance << endl;
}

void UserComputerClub::Borrow_Computer(short hour, short choose, AdminComputerClub& obj)
{
	if (choose == 1) {
		if (obj.Get_Weak_Computer_Size() == 0) { 
			// проверка если нет элементов в векторе то выводится сообщение что нету компьютеров
			cout << " -------------------------------------------------" << endl;
			cout << "|There is no PC in the computer club at the moment|" << endl;
			cout << " -------------------------------------------------" << endl;
			Sleep(1000);
			system("cls");
		}
		// проверка если есть один элемент и пк свободен то срабатывает блок кода ниже
		else if (obj.Get_Weak_Computer_Size() == 1 && obj.Get_Weak_Computer_Index(0) == 0) { 
			if (hour < 1) { // меньше одного часа нельзя взять
				cout << " -----------------" << endl;
				cout << "|Minimum 1 hour!!!|" << endl;
				cout << " -----------------" << endl;
				Sleep(1000);
				system("cls");
			}
			else if (hour >= 1) { // 1 или больше часа можно
				cout << " ----------------" << endl;
				cout << "|This is cost 50$|" << endl;
				cout << " ----------------" << endl;
				Sleep(1000);
				system("cls");
				if (balance < 50) { // проверка есть деньги у пользователя или нет если нет то срабатывает блок ниже
					cout << " ---------" << endl;
					cout << "|No money!|" << endl;
					cout << " ---------" << endl;
					Sleep(1000);
					system("cls");
				}
				else {
					balance = balance - (50 * hour); // от баланса отнимаем 50 умножение на количество часов например 1000 - (50*2) = 100
					obj.Set_Weak_Computer_Index(0, true); // вызывается сеттер и передаются параметры 0 индекс и истина 
					obj.Set_Balance(obj.Get_Balance() + ((50 * hour) - (50 * hour) * (35.0 / 100))); // прибавляем к балансу администратор и отнимаем сразу же налог от той суммы которую он заработал 35 процентов
					obj.Set_Profit(obj.Get_Profit() + ((50 * hour) - (50 * hour) * (35.0 / 100))); // прибавляем к общему заработку для записи в историю сколько вообщем заработал вместе с налогами
				}
			}
		}
		else if (obj.Get_Weak_Computer_Size() == 2) {
			if (obj.Get_Weak_Computer_Index(0) == 0) {
				if (hour < 1) { // меньше одного часа нельзя взять
					cout << " -----------------" << endl;
					cout << "|Minimum 1 hour!!!|" << endl;
					cout << " -----------------" << endl;
					Sleep(1000);
					system("cls");
				}
				else if (hour >= 1) { // 1 или больше часа можно
					cout << " ----------------" << endl;
					cout << "|This is cost 50$|" << endl;
					cout << " ----------------" << endl;
					Sleep(1000);
					system("cls");
					if (balance < 50) { // проверка есть деньги у пользователя или нет если нет то срабатывает блок ниже
						cout << " ---------" << endl;
						cout << "|No money!|" << endl;
						cout << " ---------" << endl;
						Sleep(1000);
						system("cls");
					}
					else {
						balance = balance - (50 * hour); // от баланса отнимаем 50 умножение на количество часов например 1000 - (50*2) = 100
						obj.Set_Weak_Computer_Index(0, true); // вызывается сеттер и передаются параметры 1 индекс и истина 
						obj.Set_Balance(obj.Get_Balance() + ((50 * hour) - (50 * hour) * (35.0 / 100))); // прибавляем к балансу администратор и отнимаем сразу же налог от той суммы которую он заработал 35 процентов
						obj.Set_Profit(obj.Get_Profit() + ((50 * hour) - (50 * hour) * (35.0 / 100))); // прибавляем к общему заработку для записи в историю сколько вообщем заработал вместе с налогами
					}
				}
			}
			else if (obj.Get_Weak_Computer_Index(1) == 0) {
				if (hour < 1) { // меньше одного часа нельзя взять
					cout << " -----------------" << endl;
					cout << "|Minimum 1 hour!!!|" << endl;
					cout << " -----------------" << endl;
					Sleep(1000);
					system("cls");
				}
				else if (hour >= 1) { // 1 или больше часа можно
					cout << " ----------------" << endl;
					cout << "|This is cost 50$|" << endl;
					cout << " ----------------" << endl;
					Sleep(1000);
					system("cls");
					if (balance < 50) { // проверка есть деньги у пользователя или нет если нет то срабатывает блок ниже
						cout << " ---------" << endl;
						cout << "|No money!|" << endl;
						cout << " ---------" << endl;
						Sleep(1000);
						system("cls");
					}
					else {
						balance = balance - (50 * hour); // от баланса отнимаем 50 умножение на количество часов например 1000 - (50*2) = 100
						obj.Set_Weak_Computer_Index(1, true); // вызывается сеттер и передаются параметры 1 индекс и истина 
						obj.Set_Balance(obj.Get_Balance() + ((50 * hour) - (50 * hour) * (35.0 / 100))); // прибавляем к балансу администратор и отнимаем сразу же налог от той суммы которую он заработал 35 процентов
						obj.Set_Profit(obj.Get_Profit() + ((50 * hour) - (50 * hour) * (35.0 / 100))); // прибавляем к общему заработку для записи в историю сколько вообщем заработал вместе с налогами
					}
				}
			}
		}



		else if (obj.Get_Weak_Computer_Size() == 3) {
			if (obj.Get_Weak_Computer_Index(0) == 0) {
				if (hour < 1) { // меньше одного часа нельзя взять
					cout << " -----------------" << endl;
					cout << "|Minimum 1 hour!!!|" << endl;
					cout << " -----------------" << endl;
					Sleep(1000);
					system("cls");
				}
				else if (hour >= 1) { // 1 или больше часа можно
					cout << " ----------------" << endl;
					cout << "|This is cost 50$|" << endl;
					cout << " ----------------" << endl;
					Sleep(1000);
					system("cls");
					if (balance < 50) { // проверка есть деньги у пользователя или нет если нет то срабатывает блок ниже
						cout << " ---------" << endl;
						cout << "|No money!|" << endl;
						cout << " ---------" << endl;
						Sleep(1000);
						system("cls");
					}
					else {
						balance = balance - (50 * hour); // от баланса отнимаем 50 умножение на количество часов например 1000 - (50*2) = 100
						obj.Set_Weak_Computer_Index(0, true); // вызывается сеттер и передаются параметры 2 индекс и истина 
						obj.Set_Balance(obj.Get_Balance() + ((50 * hour) - (50 * hour) * (35.0 / 100))); // прибавляем к балансу администратор и отнимаем сразу же налог от той суммы которую он заработал 35 процентов
						obj.Set_Profit(obj.Get_Profit() + ((50 * hour) - (50 * hour) * (35.0 / 100))); // прибавляем к общему заработку для записи в историю сколько вообщем заработал вместе с налогами
					}
				}
			}
			else if (obj.Get_Weak_Computer_Index(1) == 0) {
				if (hour < 1) { // меньше одного часа нельзя взять
					cout << " -----------------" << endl;
					cout << "|Minimum 1 hour!!!|" << endl;
					cout << " -----------------" << endl;
					Sleep(1000);
					system("cls");
				}
				else if (hour >= 1) { // 1 или больше часа можно
					cout << " ----------------" << endl;
					cout << "|This is cost 50$|" << endl;
					cout << " ----------------" << endl;
					Sleep(1000);
					system("cls");
					if (balance < 50) { // проверка есть деньги у пользователя или нет если нет то срабатывает блок ниже
						cout << " ---------" << endl;
						cout << "|No money!|" << endl;
						cout << " ---------" << endl;
						Sleep(1000);
						system("cls");
					}
					else {
						balance = balance - (50 * hour); // от баланса отнимаем 50 умножение на количество часов например 1000 - (50*2) = 100
						obj.Set_Weak_Computer_Index(1, true); // вызывается сеттер и передаются параметры 2 индекс и истина 
						obj.Set_Balance(obj.Get_Balance() + ((50 * hour) - (50 * hour) * (35.0 / 100))); // прибавляем к балансу администратор и отнимаем сразу же налог от той суммы которую он заработал 35 процентов
						obj.Set_Profit(obj.Get_Profit() + ((50 * hour) - (50 * hour) * (35.0 / 100))); // прибавляем к общему заработку для записи в историю сколько вообщем заработал вместе с налогами
					}
				}
			}
			else if (obj.Get_Weak_Computer_Index(2) == 0) {
				if (hour < 1) { // меньше одного часа нельзя взять
					cout << " -----------------" << endl;
					cout << "|Minimum 1 hour!!!|" << endl;
					cout << " -----------------" << endl;
					Sleep(1000);
					system("cls");
				}
				else if (hour >= 1) { // 1 или больше часа можно
					cout << " ----------------" << endl;
					cout << "|This is cost 50$|" << endl;
					cout << " ----------------" << endl;
					Sleep(1000);
					system("cls");
					if (balance < 50) { // проверка есть деньги у пользователя или нет если нет то срабатывает блок ниже
						cout << " ---------" << endl;
						cout << "|No money!|" << endl;
						cout << " ---------" << endl;
						Sleep(1000);
						system("cls");
					}
					else {
						balance = balance - (50 * hour); // от баланса отнимаем 50 умножение на количество часов например 1000 - (50*2) = 100
						obj.Set_Weak_Computer_Index(2, true); // вызывается сеттер и передаются параметры 2 индекс и истина 
						obj.Set_Balance(obj.Get_Balance() + ((50 * hour) - (50 * hour) * (35.0 / 100))); // прибавляем к балансу администратор и отнимаем сразу же налог от той суммы которую он заработал 35 процентов
						obj.Set_Profit(obj.Get_Profit() + ((50 * hour) - (50 * hour) * (35.0 / 100))); // прибавляем к общему заработку для записи в историю сколько вообщем заработал вместе с налогами
					}
				}
			}
			else { // если все пк заняты (то есть у них параметр истина ) то выводится сообщение что все пк заняты
				cout << " -------------------" << endl;
				cout << "|All weak PC is busy|" << endl;
				cout << " -------------------" << endl;
				Sleep(1000);
				system("cls");
			}
		}
	}
	if (choose == 2) {
		if (obj.Get_Average_Computer_Size() == 0) { 
			// проверка если нет элементов в векторе то выводится сообщение что нету компьютеров
			cout << " -------------------------------------------------" << endl;
			cout << "|There is no PC in the computer club at the moment|" << endl;
			cout << " -------------------------------------------------" << endl;
			Sleep(1000);
			system("cls");
		}
		// проверка если есть один элемент и пк свободен то срабатывает блок кода ниже
		else if (obj.Get_Average_Computer_Size() == 1 && obj.Get_Average_Computer_Index(0) == 0) {
			if (hour < 1) { // меньше одного часа нельзя взять
				cout << " -----------------" << endl;
				cout << "|Minimum 1 hour!!!|" << endl;
				cout << " -----------------" << endl;
				Sleep(1000);
				system("cls");
			}
			else if (hour >= 1) { // 1 или больше часа можно
				cout << " -----------------" << endl;
				cout << "|This is cost 150$|" << endl;
				cout << " -----------------" << endl;
				Sleep(1000);
				system("cls");
				if (balance < 150) { // проверка есть деньги у пользователя или нет если нет то срабатывает блок ниже
					cout << " ---------" << endl;
					cout << "|No money!|" << endl;
					cout << " ---------" << endl;
					Sleep(1000);
					system("cls");
				}
				else {
					balance = balance - (150 * hour); // от баланса отнимаем 50 умножение на количество часов например 1000 - (50*2) = 100
					obj.Set_Average_Computer_Index(0, true); // вызывается сеттер и передаются параметры 0 индекс и истина 
					obj.Set_Balance(obj.Get_Balance() + ((150 * hour) - (150 * hour) * (35.0 / 100))); // прибавляем к балансу администратор и отнимаем сразу же налог от той суммы которую он заработал 35 процентов
					obj.Set_Profit(obj.Get_Profit() + ((150 * hour) - (150 * hour) * (35.0 / 100))); // прибавляем к общему заработку для записи в историю сколько вообщем заработал вместе с налогами
				}
			}
		}
		// проверка если есть один элемент и пк свободен то срабатывает блок кода ниже
		else if (obj.Get_Average_Computer_Size() == 2) {
			if (obj.Get_Average_Computer_Index(0) == 0) {
				if (hour < 1) { // меньше одного часа нельзя взять
					cout << " -----------------" << endl;
					cout << "|Minimum 1 hour!!!|" << endl;
					cout << " -----------------" << endl;
					Sleep(1000);
					system("cls");
				}
				else if (hour >= 1) { // 1 или больше часа можно
					cout << " -----------------" << endl;
					cout << "|This is cost 150$|" << endl;
					cout << " -----------------" << endl;
					Sleep(1000);
					system("cls");
					if (balance < 150) { // проверка есть деньги у пользователя или нет если нет то срабатывает блок ниже
						cout << " ---------" << endl;
						cout << "|No money!|" << endl;
						cout << " ---------" << endl;
						Sleep(1000);
						system("cls");
					}
					else {
						balance = balance - (150 * hour);  // от баланса отнимаем 50 умножение на количество часов например 1000 - (50*2) = 100
						obj.Set_Average_Computer_Index(0, true); // вызывается сеттер и передаются параметры 0 индекс и истина 
						obj.Set_Balance(obj.Get_Balance() + ((150 * hour) - (150 * hour) * (35.0 / 100))); // прибавляем к балансу администратор и отнимаем сразу же налог от той суммы которую он заработал 35 процентов
						obj.Set_Profit(obj.Get_Profit() + ((150 * hour) - (150 * hour) * (35.0 / 100))); // прибавляем к общему заработку для записи в историю сколько вообщем заработал вместе с налогами
					}
				}
			}
			else if (obj.Get_Average_Computer_Index(0) == 0) {
				if (hour < 1) { // меньше одного часа нельзя взять
					cout << " -----------------" << endl;
					cout << "|Minimum 1 hour!!!|" << endl;
					cout << " -----------------" << endl;
					Sleep(1000);
					system("cls");
				}
				else if (hour >= 1) { // 1 или больше часа можно
					cout << " -----------------" << endl;
					cout << "|This is cost 150$|" << endl;
					cout << " -----------------" << endl;
					Sleep(1000);
					system("cls");
					if (balance < 150) { // проверка есть деньги у пользователя или нет если нет то срабатывает блок ниже
						cout << " ---------" << endl;
						cout << "|No money!|" << endl;
						cout << " ---------" << endl;
						Sleep(1000);
						system("cls");
					}
					else {
						balance = balance - (150 * hour);  // от баланса отнимаем 50 умножение на количество часов например 1000 - (50*2) = 100
						obj.Set_Average_Computer_Index(1, true); // вызывается сеттер и передаются параметры 0 индекс и истина 
						obj.Set_Balance(obj.Get_Balance() + ((150 * hour) - (150 * hour) * (35.0 / 100))); // прибавляем к балансу администратор и отнимаем сразу же налог от той суммы которую он заработал 35 процентов
						obj.Set_Profit(obj.Get_Profit() + ((150 * hour) - (150 * hour) * (35.0 / 100))); // прибавляем к общему заработку для записи в историю сколько вообщем заработал вместе с налогами
					}
				}
				else {
					cout << " ----------------------" << endl;
					cout << "|All average PC is busy|" << endl;
					cout << " ----------------------" << endl;
					Sleep(1000);
					system("cls");
				}
			}
		}
		else { // если все пк заняты (то есть у них параметр истина ) то выводится сообщение что все пк заняты
			cout << " ----------------------" << endl;
			cout << "|All average PC is busy|" << endl;
			cout << " ----------------------" << endl;
			Sleep(1000);
			system("cls");
		}
	}
	if (choose == 3) {
		if (obj.Get_Powerful_Computer_Size() == 0) { // проверка если нет элементов в векторе то выводится сообщение что нету компьютеров
			cout << " -------------------------------------------------" << endl;
			cout << "|There is no PC in the computer club at the moment|" << endl;
			cout << " -------------------------------------------------" << endl;
			Sleep(1000);
			system("cls");
		}
		// проверка если есть один элемент и пк свободен то срабатывает блок кода ниже
		else if (obj.Get_Powerful_Computer_Size() == 1 && obj.Get_Powerful_Computer_Index(0) == 0) {
			if (hour < 1) { // меньше одного часа нельзя взять
				cout << " -----------------" << endl;
				cout << "|Minimum 1 hour!!!|" << endl;
				cout << " -----------------" << endl;
				Sleep(1000);
				system("cls");
			}
			else if (hour >= 1) { // 1 или больше часа можно
				cout << " -----------------" << endl;
				cout << "|This is cost 250$|" << endl;
				cout << " -----------------" << endl;
				Sleep(1000);
				system("cls");
				if (balance < 250) { // проверка есть деньги у пользователя или нет если нет то срабатывает блок ниже
					cout << " ---------" << endl;
					cout << "|No money!|" << endl;
					cout << " ---------" << endl;
					Sleep(1000);
					system("cls");
				}
				else {
					balance = balance - (250 * hour); // от баланса отнимаем 50 умножение на количество часов например 1000 - (50*2) = 100
					obj.Set_Powerful_Computer_Index(0, true); // вызывается сеттер и передаются параметры 0 индекс и истина 
					obj.Set_Balance(obj.Get_Balance() + ((250 * hour) - (250 * hour) * (35.0 / 100))); // прибавляем к балансу администратор и отнимаем сразу же налог от той суммы которую он заработал 35 процентов
					obj.Set_Profit(obj.Get_Profit() + ((250 * hour) - (250 * hour) * (35.0 / 100))); // прибавляем к общему заработку для записи в историю сколько вообщем заработал вместе с налогами
				}
			}
		}
		else { // если все пк заняты (то есть у них параметр истина ) то выводится сообщение что все пк заняты
			cout << " -----------------------" << endl;
			cout << "|All powerful PC is busy|" << endl;
			cout << " -----------------------" << endl;
			Sleep(1000);
			system("cls");
		}
	}
}

void UserComputerClub::Release_The_Computer(short choose, AdminComputerClub& obj)
{
	if (choose == 1) { // проверка если выбрали слабый компьютер
		if (obj.Get_Weak_Computer_Size() == 0) { // проверка есть ли элементы в векторе если нету то ошибка
			cout << " ------" << endl;
			cout << "|Error!|" << endl;
			cout << " ------" << endl;
			Sleep(1000);
			system("cls");
		}
		else if (obj.Get_Weak_Computer_Size() == 1 && obj.Get_Weak_Computer_Index(0) == 1) { // если элемент 1 и он тру то срабатывает блок ниже
			obj.Set_Weak_Computer_Index(0, false); // в сеттер передается 0 индекс, и параметр не истинна
			cout << " ----------" << endl;
			cout << "|PC release|" << endl;
			cout << " ----------" << endl;
			Sleep(1000);
			system("cls");
		}
		else if (obj.Get_Weak_Computer_Size() == 2) { // если элемент 2 и он тру то срабатывает блок ниже
			if (obj.Get_Weak_Computer_Index(0) == 1) {
				obj.Set_Weak_Computer_Index(0, false); // в сеттер передается 1 индекс, и параметр не истинна
				cout << " ----------" << endl;
				cout << "|PC release|" << endl;
				cout << " ----------" << endl;
				Sleep(1000);
				system("cls");
			}
			else if (obj.Get_Weak_Computer_Index(1) == 1) {
				obj.Set_Weak_Computer_Index(1, false); // в сеттер передается 1 индекс, и параметр не истинна
				cout << " ----------" << endl;
				cout << "|PC release|" << endl;
				cout << " ----------" << endl;
				Sleep(1000);
				system("cls");

			}
			else { // если все пк свободный с параметро 0 то выводится сообщение ниже
				cout << " --------------------" << endl;
				cout << "|All weak PC not busy|" << endl;
				cout << " --------------------" << endl;
				Sleep(1000);
				system("cls");
			}
		}
		else if (obj.Get_Weak_Computer_Size() == 3) { // если элемент 3 и он тру то срабатывает блок ниже
			if (obj.Get_Weak_Computer_Index(0) == 1) {
				obj.Set_Weak_Computer_Index(0, false); // в сеттер передается 2 индекс, и параметр не истинна
				cout << " ----------" << endl;
				cout << "|PC release|" << endl;
				cout << " ----------" << endl;
				Sleep(1000);
				system("cls");
			}
			else if (obj.Get_Weak_Computer_Index(1) == 1) {
				obj.Set_Weak_Computer_Index(1, false); // в сеттер передается 2 индекс, и параметр не истинна
				cout << " ----------" << endl;
				cout << "|PC release|" << endl;
				cout << " ----------" << endl;
				Sleep(1000);
				system("cls");
			}
			else if (obj.Get_Weak_Computer_Index(2) == 1) {
				obj.Set_Weak_Computer_Index(2, false); // в сеттер передается 2 индекс, и параметр не истинна
				cout << " ----------" << endl;
				cout << "|PC release|" << endl;
				cout << " ----------" << endl;
				Sleep(1000);
				system("cls");
			}
			else { // если все пк свободный с параметро 0 то выводится сообщение ниже
				cout << " --------------------" << endl;
				cout << "|All weak PC not busy|" << endl;
				cout << " --------------------" << endl;
				Sleep(1000);
				system("cls");
			}
		}
		else { // если все пк свободный с параметро 0 то выводится сообщение ниже
			cout << " --------------------" << endl;
			cout << "|All weak PC not busy|" << endl;
			cout << " --------------------" << endl;
			Sleep(1000);
			system("cls");
		}
	}
	else if (choose == 2) { // проверка если выбрали средний компьютер
		if (obj.Get_Average_Computer_Size() == 0) { // проверка есть ли элементы в векторе если нету то ошибка
			cout << " ------" << endl;
			cout << "|Error!|" << endl;
			cout << " ------" << endl;
			Sleep(1000);
			system("cls");
		}
		else if (obj.Get_Average_Computer_Size() == 1 && obj.Get_Average_Computer_Index(0) == 1) { // если элемент 1 и он тру то срабатывает блок ниже
			obj.Set_Average_Computer_Index(0, false); // в сеттер передается 0 индекс, и параметр не истинна
			cout << " ----------" << endl;
			cout << "|PC release|" << endl;
			cout << " ----------" << endl;
			Sleep(1000);
			system("cls");
		}
		else if (obj.Get_Average_Computer_Size() == 2 && obj.Get_Average_Computer_Index(1) == 1) { // если элемент 2 и он тру то срабатывает блок ниже
			if (obj.Get_Average_Computer_Index(0) == 1) {
				obj.Set_Average_Computer_Index(0, false); // в сеттер передается 1 индекс, и параметр не истинна
				cout << " ----------" << endl;
				cout << "|PC release|" << endl;
				cout << " ----------" << endl;
				Sleep(1000);
				system("cls");
			}
			else if (obj.Get_Average_Computer_Index(1) == 1) {
				obj.Set_Average_Computer_Index(1, false); // в сеттер передается 1 индекс, и параметр не истинна
				cout << " ----------" << endl;
				cout << "|PC release|" << endl;
				cout << " ----------" << endl;
				Sleep(1000);
				system("cls");
			}
			else { // если все пк свободный с параметро 0 то выводится сообщение ниже
				cout << " -----------------------" << endl;
				cout << "|All average PC not busy|" << endl;
				cout << " -----------------------" << endl;
				Sleep(1000);
				system("cls");
			}

		} 
		else { // если все пк свободный с параметро 0 то выводится сообщение ниже
			cout << " -----------------------" << endl;
			cout << "|All average PC not busy|" << endl;
			cout << " -----------------------" << endl;
			Sleep(1000);
			system("cls");
		}

	}
	else if (choose == 3) { // проверка если выбрали мощного компьютер
		if (obj.Get_Powerful_Computer_Size() == 0) { // проверка есть ли элементы в векторе если нету то ошибка
			cout << " ------" << endl;
			cout << "|Error!|" << endl;
			cout << " ------" << endl;
			Sleep(1000);
			system("cls");
		}
		else if (obj.Get_Powerful_Computer_Size() == 1 && obj.Get_Powerful_Computer_Index(0) == 1) { // если элемент 1 и он тру то срабатывает блок ниже
			obj.Set_Powerful_Computer_Index(0, false); // в сеттер передается 0 индекс, и параметр не истинна
			cout << " ----------" << endl;
			cout << "|PC release|" << endl;
			cout << " ----------" << endl;
			Sleep(1000);
			system("cls");
		}
		else { // если все пк свободный с параметро 0 то выводится сообщение ниже
			cout << " ------------------------" << endl;
			cout << "|All powerful PC not busy|" << endl;
			cout << " ------------------------" << endl;
			Sleep(1000);
			system("cls");
		}
	}
}