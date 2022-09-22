#pragma once
#include <iostream>
#include "MyClassString.h"

using namespace std;

class var
{
	int var_int;
	double var_double;
	MyString str;
	short type;
public:
	var(); // Constructor by default

	var(int value_var1); // Constructor by parametres int

	var(double value_var2); // Constructor by parametres double

	var(const char* value_str); // Constructor by parametres str

	var(const MyString& value_var3); // Constructor by parametres str

	var(const var& obj); // Constructor by parametres obj

	void Show(); // Method output

	operator int(); // transformation for int

	operator double(); // transformation for double

	operator const char* (); // transformation for str

	var& operator=(int value_int); // assignment operator for int

	var& operator=(double value_double); // assignment operator for double

	var& operator=(const MyString& value_str); // assignment operator for str

	var& operator=(const char* str); // assignment operator for str

	var& operator=(const var& obj); // assignment operator for obj a = b

	var operator+(int value_int) const; // addition operator for int

	var operator+(double value_double)const; // addition operator for double

	var operator+(const MyString& value_str) const; // addition operator for str

	var operator+(const char* value_str)const; // addition operator for str

	var operator+(const var& obj)const; // addition operator for obj a + b

	var operator-(int value_int)const; // subtraction operator for int

	var operator-(double value_double)const; // subtraction operator for double

	var operator-(const MyString& str)const; // subtraction operator for str

	var operator-(const char* str)const; // subtraction operator for str

	var operator-(const var& obj)const; //subtraction operator for obj a - b

	var operator*(int value_int)const; // multiplication operator for int

	var operator*(double value_double)const; // multiplication operator for double

	var operator*(const MyString& str)const; // multiplication operator for str

	var operator*(const char* str)const; // multiplication operator for str

	var operator*(const var& obj)const; // multiplication operator for obj a * b

	var operator/(int value_int)const; // division operator for int

	var operator/(double value_double)const; // division operator for double

	var operator/(const MyString& str)const; // division operator for str

	var operator/(const char* str)const;// division operator for str

	var operator/(const var& obj)const;// division operator for obj a / b

	var& operator+=(int value_int); // abbreviated for int

	var& operator+=(double value_double); // abbreviated for double

	var& operator+=(const MyString& str); // abbreviated for str

	var& operator+=(const char* str); // abbreviated for const char*

	var& operator+=(const var& obj);// abbreviated for obj a += b

	var& operator-=(int value_int); // abbreviated for int

	var& operator-=(double value_double); // abbreviated for double

	var& operator-=(const MyString& str); // abbreviated for str

	var& operator-=(const char* str); // abbreviated for const char*

	var& operator-=(const var& obj); // abbreviated for obj a-=b

	var& operator*=(int value_int); // abbreviated for int

	var& operator*=(double value_double); // abbreviated for double

	var& operator*=(const MyString& str); // abbreviated for str

	var& operator*=(const char* str); // abbreviated for const char*

	var& operator*=(const var& obj); // abbreviated for obj a*=b

	var& operator/=(int value_int); // abbreviated for int

	var& operator/=(double value_double); // abbreviated for double

	var& operator/=(const MyString& str); // abbreviated for str

	var& operator/=(const char* str); // abbreviated for const char*

	var& operator/=(const var& obj); // abbreviated for obj a/=b

	bool operator==(int value_int)const; // operator equal for int

	bool operator==(double value_double)const; // operator equal for double

	bool operator==(const MyString& str)const; // operator equal for str

	bool operator==(const char* str)const;  // operator equal  for const char*

	bool operator==(const var& obj)const; // operator equal for obj a == b

	bool operator!=(int value_int)const;// operator not equal for int

	bool operator!=(double value_double)const; // operator not equal for double

	bool operator!=(const MyString& str)const; // operator not equal for str

	bool operator!=(const char* str)const; // operator not equal for const char* str

	bool operator!=(const var& obj)const; // operator not equal for obj a!=b

	bool operator<(int value_int)const; // operator less for int

	bool operator<(double value_double)const; // operator less for double

	bool operator<(const MyString& str)const; // operator less for str

	bool operator<(const char* str)const; // operator less for const char* str

	bool operator<(const var& obj)const; // operator less for obj a < b

	bool operator>(int value_int)const; // operator more for int

	bool operator>(double value_double)const; // operator more for double

	bool operator>(const MyString& str)const; // operator more for str

	bool operator>(const char* str)const; // operator more for const char* str

	bool operator>(const var& obj)const; // operator more for obj a > b

	bool operator<=(int value_int)const;  // operator less or equal for int

	bool operator<=(double value_double)const; // operator less or equal for double

	bool operator<=(const MyString& str)const; // operator less or equal for str

	bool operator<=(const char* str)const; // operator less or equal for const char* str

	bool operator<=(const var& obj)const; // operator less or equal for obj a <= b

	bool operator>=(int value_int)const; // operator more or equal for int

	bool operator>=(double value_double)const; // operator more or equal for double

	bool operator>=(const MyString& str)const; // operator more or equal for str

	bool operator>=(const char* str)const; // operator more or equal for const char* str

	bool operator>=(const var& obj)const; // operator more or equal for obj a >= b

	MyString Get_Var_Str()const; // getter for str

	double Get_Var_Double()const; // getter for double

	int Get_Var_Int()const; // getter for int

	const char* Get_Var_Const_Char()const; // getter for const char*

	short Get_Type()const; // gette type
};