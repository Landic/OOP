#include "Passport.h"
#include <iostream>
#include "Passport.h"

using namespace std;

Passport::Passport() // constructor default
{
	passport_ID = 0;
}

Passport::Passport(string value_name,string value_surname, string value_data, string value_country, string value_sex) // constructor by parametrs
{
	name = value_name;
	surname = value_surname;
	data = value_data;
	country = value_country;
	sex = value_sex;
}

void Passport::Input() // Input method
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
}

void Passport::Passport_ID() // method random id passport
{
	srand(time(0));
	int min = 100000000, max = 999999999; 
	passport_ID = min + rand() % (max - min + 1); // random by range
}

void Passport::Print() // method print
{
	// a little bit of beauty in the console :)
	cout << " _____________________________________" << endl;
	cout << "|          Pasport of Ukraine         |" << endl;
	cout << "|-------------------------------------|" << endl;
	cout << "| ___________                         |" << endl;
	cout << "||           |Surname: " << surname << "         |" << endl;
	cout << "||           |Name: " << name << "            |" << endl;
	cout << "||   Photo   |Sex: " << sex <<"                |" << endl;
	cout << "||           |Data: " << data << "        |" << endl;
	cout << "||           |Nationality: " << country << "    |" << endl;
	cout << "||           |Passport ID: " << passport_ID << "  |" << endl;
	cout << "| -----------                         |" << endl;
	cout << "|_____________________________________|" << endl;
}
