#include <iostream>
#include "Login.h"
#include "LoginForAdmin.h"
#include "LoginForUser.h"
#include "AdminComputerClub.h"
#include "UserComputerClub.h"
#include <Windows.h>
#include <cstdlib>

using namespace std;

void Menu_For_Admin(); // функция для вывода меню для админа

void Menu_For_User(); // функция для вывода меню для пользователя

enum ConsoleColor { // для цветов
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};

int main() {
	short choose, hour;
	LoginForAdmin login_admin;
	LoginForUser login_user;
	UserComputerClub b;
	AdminComputerClub a;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	// МЕНЮ
	while (true) {
		SetConsoleTextAttribute(hStdOut, 2);
		cout << " --------" << endl;
		cout << "|1. User |" << endl;
		cout << "|--------|" << endl;
		SetConsoleTextAttribute(hStdOut, 4);
		cout << "|2. Admin|" << endl;
		cout << "|--------|" << endl;
		SetConsoleTextAttribute(hStdOut, 15);
		cout << "|3. Exit |" << endl;
		cout << " --------" << endl;
		cout << "Enter... ";
		cin >> choose;
		system("cls");
		switch (choose) {
		case 1:
			while (true) {
				SetConsoleTextAttribute(hStdOut, 2);
				cout << " ----------" << endl;
				cout << "|1. Login  |" << endl;
				cout << "|----------|" << endl;
				SetConsoleTextAttribute(hStdOut, 4);
				cout << "|2. Sign up|" << endl;
				cout << "|----------|" << endl;
				SetConsoleTextAttribute(hStdOut, 15);
				cout << "|3. Back   |" << endl;
				cout << " ----------" << endl;
				cin >> choose;
				system("cls");
				switch (choose) {
				case 1:
					if (login_user.Login_In_System() == true) {
						while (true) {
							system("cls");
							SetConsoleTextAttribute(hStdOut, 9);
							Menu_For_User();
							SetConsoleTextAttribute(hStdOut, 15);
							cout << "Enter... ";
							cin >> choose;
							system("cls");
							switch (choose) {
							case 1:
								SetConsoleTextAttribute(hStdOut, 9);
								cout << " ---------------" << endl;
								cout << "|   Choose PC   |" << endl;
								cout << "|---------------|" << endl;
								SetConsoleTextAttribute(hStdOut, 2);
								cout << "|1. Weak PC     |" << endl;
								cout << "|---------------|" << endl;
								SetConsoleTextAttribute(hStdOut, 5);
								cout << "|2. Middle PC   |" << endl;
								cout << "|---------------|" << endl;
								SetConsoleTextAttribute(hStdOut, 12);
								cout << "|3. Powerfull PC|" << endl;
								cout << "|---------------|" << endl;
								SetConsoleTextAttribute(hStdOut, 14);
								cout << "|4. Back        |" << endl;
								cout << " ---------------" << endl;
								SetConsoleTextAttribute(hStdOut, 15);
								cout << "Enter... ";
								cin >> choose;
								system("cls");
								if (choose >= 1 && choose <= 3) {
									cout << " -------------------------------" << endl;
									cout << "|Enter your hour |minimum 1 hour|" << endl;
									cout << " -------------------------------" << endl;
									cout << "Enter... ";
									cin >> hour;
									system("cls");
									b.Borrow_Computer(hour, choose, a);
									continue;
								}
								else {
									continue;
								}
							case 2:
								SetConsoleTextAttribute(hStdOut, 9);
								cout << " ---------------" << endl;
								cout << "|   Choose PC   |" << endl;
								cout << "|---------------|" << endl;
								SetConsoleTextAttribute(hStdOut, 2);
								cout << "|1. Weak PC     |" << endl;
								cout << "|---------------|" << endl;
								SetConsoleTextAttribute(hStdOut, 5);
								cout << "|2. Middle PC   |" << endl;
								cout << "|---------------|" << endl;
								SetConsoleTextAttribute(hStdOut, 12);
								cout << "|3. Powerfull PC|" << endl;
								cout << "|---------------|" << endl;
								SetConsoleTextAttribute(hStdOut, 14);
								cout << "|4. Back        |" << endl;
								cout << " ---------------" << endl;
								SetConsoleTextAttribute(hStdOut, 15);
								cout << "Enter... ";
								cin >> choose;
								system("cls");
								if (choose >= 1 && choose <= 3) {
									b.Release_The_Computer(choose, a);
									system("cls");
									continue;
								}
								else{
									continue;
								}

								continue;
							case 3:
								b.Output();
								cout << "1. Back" << endl;
								cin >> choose;
								if (choose == 1) {
									continue;
								}
							case 4:
								cout << "Exit... " << endl;
								Sleep(1000);
								system("cls");
								break;
							}
							break;
						}
					}
					else {
						continue;
					}
					break;
				case 2:
					login_user.Register();
					system("cls");
					continue;
				case 3:
					break;
				}
				break;
			}
		case 2:
			SetConsoleTextAttribute(hStdOut, 2);
			cout << " ----------" << endl;
			cout << "|1. Login  |" << endl;
			cout << "|----------|" << endl;
			SetConsoleTextAttribute(hStdOut, 4);
			cout << "|2. Sign up|" << endl;
			cout << "|----------|" << endl;
			SetConsoleTextAttribute(hStdOut, 15);
			cout << "|3. Back   |" << endl;
			cout << " ----------" << endl;
			cin >> choose;
			system("cls");
			switch (choose) {
			case 1:
				if (login_admin.Login_In_System() == true) {
					while (true) {
						system("cls");
						Menu_For_Admin();
						cout << "Enter... ";
						cin >> choose;
						system("cls");
						switch (choose) {
						case 1:
							a.Output();
							cout << "1. Back" << endl;
							cin >> choose;
							if (choose == 1) {
								system("cls");
								continue;
							}
						case 2:
							SetConsoleTextAttribute(hStdOut, 2);
							cout << " -------------------------" << endl;
							cout << "|1. Weak computer - 450$  |" << endl;
							cout << "|-------------------------|" << endl;
							SetConsoleTextAttribute(hStdOut, 5);
							cout << "|2. Middle computer - 900$|" << endl;
							cout << "|-------------------------|" << endl;
							SetConsoleTextAttribute(hStdOut, 12);
							cout << "|3. High computer - 1500$ |" << endl;
							cout << "|-------------------------|" << endl;
							SetConsoleTextAttribute(hStdOut, 14);
							cout << "|4. Back                  |" << endl;
							cout << " -------------------------" << endl;
							SetConsoleTextAttribute(hStdOut, 15);
							cout << "Enter... ";
							cin >> choose;
							system("cls");
							if (choose >= 1 && choose <= 3) {
								a.Buy_Computer(choose);
								continue;
							}
							else {
								continue;
							}
						case 3:
							a.Computer_Is_Busy();
							SetConsoleTextAttribute(hStdOut, 15);
							cout << "|1. Back               |" << endl;
							cout << " ----------------------" << endl;
							cout << "Enter... ";
							cin >> choose;
							if (choose == 1) {
								system("cls");
								continue;
							}
						case 4:
							SetConsoleTextAttribute(hStdOut, 2);
							cout << " -------------------------" << endl;
							cout << "|1. Weak computer - 250$  |" << endl;
							cout << "|-------------------------|" << endl;
							SetConsoleTextAttribute(hStdOut, 5);
							cout << "|2. Middle computer - 400$|" << endl;
							cout << "|-------------------------|" << endl;
							SetConsoleTextAttribute(hStdOut, 12);
							cout << "|3. High computer - 750$  |" << endl;
							cout << "|-------------------------|" << endl;
							SetConsoleTextAttribute(hStdOut, 14);
							cout << "|4. Back                  |" << endl;
							cout << " -------------------------" << endl;
							SetConsoleTextAttribute(hStdOut, 15);
							cout << "Enter... ";
							cin >> choose;
							system("cls");
							if (choose >= 1 && choose <= 3) {
								a.Sell_Computer(choose);
								continue;
							}
							else {
								continue;
							}
						case 5:
							cout << "Exit... " << endl;
							Sleep(1000);
							system("cls");
							break;
						}
						break;
					}
				}
				else {
					continue;
				}
				continue;
			case 2:
				login_admin.Register();
				system("cls");
				continue;
			case 3:
				continue;
			}
		case 3:
			break;
		}
		break;
	}
}

void Menu_For_Admin()
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, 10);
	cout << " ----------------" << endl;
	cout << "|1. Output       |" << endl;
	cout << "|----------------|" << endl;
	cout << "|2. Buy computer |" << endl;
	cout << "|----------------|" << endl;
	cout << "|3. Computer busy|" << endl;
	cout << "|----------------|" << endl;
	cout << "|4. Sell computer|" << endl;
	cout << "|----------------|" << endl;
	cout << "|5. Exit         |" << endl;
	cout << " ----------------" << endl;
	SetConsoleTextAttribute(hStdOut, 15);
}

void Menu_For_User() {
	cout << " -----------------------" << endl;
	cout << "|1. Borrow a computer   |" << endl;
	cout << "|-----------------------|" << endl;
	cout << "|2. Release the computer|" << endl;
	cout << "|-----------------------|" << endl;
	cout << "|3. Profile             |" << endl;
	cout << "|-----------------------|" << endl;
	cout << "|4. Exit                |" << endl;
	cout << " -----------------------" << endl;
}