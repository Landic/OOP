#pragma once
#include <string>
#include <iostream>
#include "Passport.h"

using namespace std;

class ForeignPassport : protected Passport
{
	string visa;
	int foreign_passport_number;
	string date_visa;
public:
	ForeignPassport(); // constructor by default
	ForeignPassport(string value_visa, string value_date_visa, string value_name, string value_surname, string value_data, string value_country, string value_sex); // constructor by parametrs
	void Foreign_Passport_ID(); // method random id
	void Input_Foreign(); // method input
	void Print(); // method print
};

