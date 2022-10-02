#include "ForeignPassport.h"
#include <string>
#include <iostream>

using namespace std;


ForeignPassport::ForeignPassport() // constructor by default
{
	foreign_passport_number = 0;
}

ForeignPassport::ForeignPassport(string value_visa, string value_date_visa, string value_name, string value_surname, string value_data, string value_country, string value_sex) // constructor by parametrs
{
	visa = value_visa;
	name = value_name;
	surname = value_surname;
	data = value_data;
	country = value_country;
	sex = value_sex;
	date_visa = value_date_visa;
}

void ForeignPassport::Foreign_Passport_ID() // method random id
{
	srand(time(0));
	int min = 100000000, max = 999999999;
	foreign_passport_number = min + rand() % (max - min + 1); // random by range
}

void ForeignPassport::Input_Foreign() // method input
{
	cout << "Enter name" << endl;
	cout << "Enter... ";
	cin >> name;
	system("CLS");
	cout << "Enter surname" << endl;
	cout << "Enter... ";
	cin >> surname;
	system("cls");
	cout << "Enter date" << endl;
	cout << "Enter... ";
	cin >> data;
	system("cls");
	cout << "Enter country" << endl;
	cout << "Enter... ";
	cin >> country;
	system("cls");
	cout << "Enter sex" << endl;
	cout << "Enter... ";
	cin >> sex;
	system("cls");
	cout << "Enter visa" << endl;
	cout << "Enter... ";
	cin >> visa;
	system("cls");
	cout << "Enter date visa" << endl;
	cout << "Enter... ";
	cin >> date_visa;
	system("cls");
}

void ForeignPassport::Print() // method print
{
	// a little bit of beauty in the console :)
	cout << " _____________________________________" << endl;
	cout << "|                 Visa                |" << endl;
	cout << "|-------------------------------------|" << endl;
	cout << "|        _____________                |" << endl;
	cout << "|       | "<<date_visa << "  |               |" << endl;
	cout << "|       |   " << visa << "   |               |" << endl;
	cout << "|        -------------                |" << endl;
	cout << "|                                     |" << endl;
	cout << "|                                     |" << endl;
	cout << "|                                     |" << endl;
	cout << "|                                     |" << endl;
	cout << "|_____________________________________|" << endl;
	cout << "|_____________________________________|" << endl;
	cout << "|               Ukraine               |" << endl;
	cout << "|-------------------------------------|" << endl;
	cout << "| ___________                         |" << endl;
	cout << "||           |Surname: " << surname << "         |" << endl;
	cout << "||           |Name: " << name << "            |" << endl;
	cout << "||   Photo   |Sex: " << sex << "                |" << endl;
	cout << "||           |Data: " << data << "        |" << endl;
	cout << "||           |Nationality: " << country << "    |" << endl;
	cout << "||           |ID: " << foreign_passport_number << "           |" << endl;
	cout << "| -----------                         |" << endl;
	cout << "|_____________________________________|" << endl;
}
