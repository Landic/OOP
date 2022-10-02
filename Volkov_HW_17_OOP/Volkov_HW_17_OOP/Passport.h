#pragma once
#include <string>
#include <iostream>

using namespace std;


class Passport
{
protected:
	string name;
	string surname;
	string data;
	string country;
	string sex;
	int passport_ID;
public:
	Passport();
	Passport(string value_name,string value_surname, string value_data, string value_country, string value_sex); // constructor by parametrs
	void Input(); // Input method
	void Passport_ID(); // method random id passport
	void Print(); // method print
};

