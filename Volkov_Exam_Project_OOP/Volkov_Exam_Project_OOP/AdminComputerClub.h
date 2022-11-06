#pragma once
#include "ComputerClub.h"
#include "LoginForAdmin.h"
#include <vector>
using namespace std;
class AdminComputerClub : public ComputerClub
{
	float profit;
public:
	AdminComputerClub(); // конструктор по умолчанию
	void Buy_Weak_Computer(); // метод для покупки пк
	void Buy_Average_Computer(); // метод для покупки пк
	void Buy_Powerful_Computer(); // метод для покупки пк
	void Output(); // вывод
	void Sell_Weak_Computer(); // метод для продажи пк
	void Sell_Average_Computer(); // метод для продажи пк
	void Sell_Powerful_Computer(); // метод для продажи пк
	void Computer_Is_Busy(); // вывод всех компьютеров и просмотр их заняты они или нет
	// АКСЕССОРЫ
	int Get_Weak_Computer_Size();
	int Get_Average_Computer_Size();
	int Get_Powerful_Computer_Size();
	float Get_Balance();
	float Get_Profit();
	void Set_Balance(float value_balance);
	void Set_Profit(float value_profit);
	int Get_Weak_Computer_Index(int index);
	int Get_Average_Computer_Index(int index);
	int Get_Powerful_Computer_Index(int index);
	void Set_Weak_Computer_Index(int index, int true_false);
	void Set_Average_Computer_Index(int index, int true_false);
	void Set_Powerful_Computer_Index(int index, int true_false);
};

