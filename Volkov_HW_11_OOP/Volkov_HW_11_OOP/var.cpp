#include "var.h"
#include <iostream>

using namespace std;

var::var() { // Constructor by default
	var_int = 0;
	var_double = 0.0;
	type = -1;
}

 
var::var(int value_var_int):var() // Constructor by parametres int
{
	type = 0;
	var_int = value_var_int;
}

var::var(double value_var_double):var() // Constructor by parametres double
{
	type = 1;
	var_double = value_var_double;
}

var::var(const char* value_str):var() // Constructor by parametres str
{
	type = 2;
	str = value_str;
}

var::var(const MyString& value_str):var() // Constructor by parametres str
{
	type = 2;
	str = value_str;
}

var::var(const var& obj) // Constructor by parametres obj
{
	var_int = obj.var_int;
	var_double = obj.var_double;
	str = obj.str;
	type = obj.type;
}

void var::Show() // Method output
{
	if (type == 0)
		cout << " " << var_int << endl;
	else if (type == 1)
		cout << " " << var_double << endl;
	else if (type == 2) {
		cout << " " << str << endl;
	}
}

var::operator int() // transformation for int
{
	if (type == -1)
		return -1;
	else if (type == 0)
		return var_int;
	else if (type == 1)
		return (int)var_double;
	else if (type == 2)
		return atoi(str.My_Str_Pointer());
}

var::operator double() // transformation for double
{
	if (type == -1)
		return -1;
	else if (type == 0)
		return (double)var_int;
	else if (type == 1)
		return var_double;
	else if (type == 2)
		return atoi(str.My_Str_Pointer());
}

var::operator const char* () // transformation for str
{
	if (type == -1)
		return nullptr;
	else if (type == 0)
	{
		char* buffer = new char[20];
		_itoa_s(var_int, buffer, 20, 10);
		return buffer;
	}
	else if (type == 1)
	{
		char* buffer = new char[20];
		_itoa_s(int(var_double * 1000), buffer, 20, 10);
		buffer[strlen(buffer) - 1] = buffer[strlen(buffer) - 2];
		buffer[strlen(buffer) - 2] = buffer[strlen(buffer) - 3];
		buffer[strlen(buffer) - 3] = '.';
		return buffer;
	}
	else if (type == 2)
	{
		return str.My_Str_Pointer();
	}
}

var& var::operator=(int value_int) // assignment operator for int
{
	var_int = value_int;
	var_double = 0;
	str = "\0";
	type = 0;
	return *this;
}

var& var::operator=(double value_double) // assignment operator for double
{
	var_double = value_double;
	var_int = 0;
	str = "\0";
	type = 1;
	return *this;
}

var& var::operator=(const MyString& value_str) // assignment operator for str
{
	str = value_str;
	var_double = 0;
	var_int = 0;
	type = 2;
	return *this;
}

var& var::operator=(const char* value_str) // assignment operator for str
{
	str = value_str;
	var_double = 0;
	var_int = 0;
	type = 2;
	return *this;
}

var& var::operator=(const var& obj) // assignment operator for obj a = b
{
	if (this == &obj || this->type == -1)
		return *this;
	var_int = obj.var_int;
	var_double = obj.var_double;
	str = obj.str;
	type = obj.type;
	return *this;
}

var var::operator+(int value_int) const // addition operator for int
{
	var temp(*this);
	if (temp.type == -1)
		temp = value_int;
	else if (temp.type == 0)
		temp.var_int = temp.var_int + value_int;
	else if (temp.type == 1)
		temp.var_double = temp.var_double + (double)value_int;
	else if (temp.type == 2) {
		char temp_str[20];
		_itoa_s(value_int, temp_str, 20, 10);
		temp.str.MyStrCat(temp_str);
	}
	return temp;
}

var var::operator+(double value_double) const // addition operator for double
{
	var temp(*this);
	if (temp.type == -1)
		temp = value_double;
	else if (temp.type == 0)
		temp.var_int = temp.var_int + (int)value_double;
	else if (temp.type == 1)
		temp.var_double = temp.var_double + value_double;
	else if (temp.type == 2) {
		char temp_str[20];
		_itoa_s(value_double, temp_str, 20, 10);
		temp_str[strlen(temp_str) - 1] = temp_str[strlen(temp_str) - 2];
		temp_str[strlen(temp_str) - 2] = temp_str[strlen(temp_str) - 3];
		temp_str[strlen(temp_str) - 3] = '.';
		temp.str.MyStrCat(temp_str);
	}
	return temp;
}

var var::operator+(const MyString& value_str) const// addition operator for str
{
	var temp(*this);
	if (temp.type == -1)
		temp = value_str;
	else if (temp.type == 0)
		temp.var_int = temp.var_int + atoi(value_str.My_Str_Pointer());
	else if (temp.type == 1)
		temp.var_double = temp.var_double + strtod(str.My_Str_Pointer(), nullptr);
	else if (temp.type == 2)
		temp.str.MyStrCat(value_str);
	return temp;
}

var var::operator+(const char* value_str) const // addition operator for str
{
	return (*this + MyString(str));
}

var var::operator+(const var& obj) const // addition operator for obj a + b
{
	var temp(*this);
	if (obj.type == 0)
		temp = temp + obj.var_int;
	else if (obj.type == 1)
		temp = temp + obj.var_double;
	else if (obj.type == 2)
		temp = temp + obj.str;
	return temp;
}

var var::operator-(int value_int) const // subtraction operator for int
{
	if (type == 2)
		return *this;
	var temp(*this);
	if (temp.type == -1)
		temp = value_int;
	else if (temp.type == 0)
		temp.var_int = temp.var_int - value_int;
	else if (temp.type == 1)
		temp.var_double = temp.var_double - (double)value_int;
	return temp;
}

var var::operator-(double value_double) const // subtraction operator for double
{
	if (type == 2)
		return *this;
	var temp(*this);
	if (temp.type == -1)
		temp = value_double;
	else if (temp.type == 0)
		temp.var_int = temp.var_int - (int)value_double;
	else if (temp.type == 1)
		temp.var_double = temp.var_double - value_double;
	return temp;
}

var var::operator-(const MyString& str) const // subtraction operator for str
{
	if (type == 2)
		return*this;
	var temp(*this);
	if (temp.type == -1)
		temp = str;
	else if (temp.type == 0)
		temp.var_int = temp.var_int - atoi(str.My_Str_Pointer());
	else if (temp.type == 1)
		temp.var_double = temp.var_double - strtod(str.My_Str_Pointer(), nullptr);
	return temp;
}

var var::operator-(const char* str) const // subtraction operator for str
{
	return(*this - MyString(str));
}

var var::operator-(const var& obj) const //subtraction operator for obj a - b
{
	var temp(*this);

	if (obj.type == 0)
		temp = temp - obj.var_int;

	else if (obj.type == 1)
		temp = temp - obj.var_double;

	else if (obj.type == 2)
		temp = temp - obj.str;

	return temp;
}

var var::operator*(int value_int) const // multiplication operator for int
{
	var temp(*this);
	if (temp.type == -1)
		temp = value_int;
	else if (temp.type == 0)
		temp.var_int = temp.var_int * value_int;
	else if (temp.type == 1)
		temp.var_double = temp.var_double * (double)value_int;
	return temp;
}

var var::operator*(double value_double) const // multiplication operator for double
{
	var temp(*this);
	if (temp.type == -1)
		temp = value_double;
	else if (temp.type == 0)
		temp.var_int = temp.var_int * (int)value_double;
	else if (temp.type == 1)
		temp.var_double = temp.var_double * value_double;
	return temp;
}

var var::operator*(const MyString& str) const // multiplication operator for str
{
	var temp(*this);
	if (temp.type == -1)
		temp = str;
	else if (temp.type == 0)
		temp.var_int = temp.var_int * atoi(str.My_Str_Pointer());
	else if (temp.type == 1)
		temp.var_double = temp.var_double * strtod(str.My_Str_Pointer(), nullptr);
	else if(temp.type == 2)
		for (int i = 0; i < temp.str.My_Strlen(); i++)
			if (str.My_Chr(temp.str[i]) == 1) {
				temp.str.MyDelChr(temp.str[i]);
				i = 0;
			}
	return temp;
}

var var::operator*(const char* str) const // multiplication operator for str
{
	return (*this * MyString(str));
}

var var::operator*(const var& obj) const // multiplication operator for obj a * b
{
	var temp(*this);
	if (obj.type == 0)
		temp = temp * obj.var_int;
	else if (obj.type == 1)
		temp = temp * obj.var_double;
	else if (obj.type == 2)
		temp = temp * obj.str;
	return temp;
}


var var::operator/(int value_int) const // division operator for int
{
	var temp(*this);
	if (temp.type == -1)
		temp = value_int;
	else if (temp.type == 0)
		temp.var_int = temp.var_int / value_int;
	else if (temp.type == 1)
		temp.var_double = temp.var_double / (double)value_int;
	return temp;
}

var var::operator/(double value_double) const // division operator for double
{
	var temp(*this);
	if (temp.type == -1)
		temp = value_double;
	else if (temp.type == 0)
		temp.var_int = temp.var_int / (int)value_double;
	else if (temp.type == 1)
		temp.var_double = temp.var_double / value_double;
	return temp;
}


var var::operator/(const MyString& str) const { // division operator for str
	var temp(*this);
	if (temp.type == -1)
		temp = str;
	else if (temp.type == 0)
	{
		temp.var_int = temp.var_int / atoi(str.My_Str_Pointer());
	}
	else if (temp.type == 1)
	{
		temp.var_double = temp.var_double / strtod(str.My_Str_Pointer(), nullptr);
	}
	else if (temp.type == 2)
	{
		for (int i = 0; i < str.My_Strlen(); i++)
		{
			temp.str.MyDelChr(str[i]);
		}
	}
	return temp;
}


var var::operator/(const char* str) const // division operator for str
{
	return (*this / MyString(str));
}


var var::operator/(const var& obj) const // division operator for obj a / b
{
	var temp(*this);
	if (obj.type == 0)
		temp = temp / obj.var_int;
	else if (obj.type == 1)
		temp = temp / obj.var_double;
	else if (obj.type == 2)
		temp = temp / obj.str;
	return temp;
}


var& var::operator+=(int value_int) // abbreviated for int
{
	*this = *this + value_int;
	return *this;
}


var& var::operator+=(double value_double) // abbreviated for double
{
	*this = *this + value_double;
	return *this;
}

var& var::operator+=(const MyString& str) // abbreviated for str
{
	*this = *this + str;
	return *this;
}

var& var::operator+=(const char* str) // abbreviated for const char*
{
	*this = *this + str;
	return *this;
}

var& var::operator+=(const var& obj) // abbreviated for obj a += b
{
	*this = *this + obj;
	return *this;
}


var& var::operator-=(int value_int) // abbreviated for int
{
	*this = *this - value_int;
	return *this;
}


var& var::operator-=(double value_double) // abbreviated for double
{
	*this = *this - value_double;
	return *this;
}

var& var::operator-=(const MyString& str) // abbreviated for str
{
	*this = *this - str;
	return *this;
}

var& var::operator-=(const char* str) // abbreviated for const char*
{
	*this = *this - str;
	return *this;
}

var& var::operator-=(const var& obj) // abbreviated for obj a-=b
{
	*this = *this - obj;
	return *this;
}

var& var::operator*=(int value_int) // abbreviated for int
{
	*this = *this * value_int;
	return *this;
}


var& var::operator*=(double value_double) // abbreviated for double
{
	*this = *this * value_double;
	return *this;
}

var& var::operator*=(const MyString& str) // abbreviated for str
{
	*this = *this * str;
	return *this;
}

var& var::operator*=(const char* str) // abbreviated for const char*
{
	*this = *this * str;
	return *this;
}

var& var::operator*=(const var& obj) // abbreviated for obj a*=b
{
	*this = *this * obj;
	return *this;
}


var& var::operator/=(int value_int) // abbreviated for int
{
	*this = *this / value_int;
	return *this;
}


var& var::operator/=(double value_double) // abbreviated for double
{
	*this = *this / value_double;
	return *this;
}

var& var::operator/=(const MyString& str) // abbreviated for str
{
	*this = *this / str;
	return *this;
}

var& var::operator/=(const char* str) // abbreviated for const char*
{
	*this = *this / str;
	return *this;
}

var& var::operator/=(const var& obj) // abbreviated for obj a/=b
{
	*this = *this / obj;
	return *this;
}


bool var::operator==(int value_int)const // operator equal for int
{
	if (type == -1)
		return false;
	else if (type == 0)
		return var_int == value_int;
	else if (type == 1)
		return var_double == (double)value_int;
	else if (type == 2) {
		char temp_str[80];
		_itoa_s(value_int, temp_str, 80, 10);
		if (str.MyStrCmp(MyString(temp_str)) == 0)
			return true;
		else
			return false;
	}
	return false;
}


bool var::operator==(double value_double)const // operator equal for double
{
	if (type == -1)
		return false;
	else if (type == 0)
		return var_int == (int)value_double;
	else if (type == 1)
		return var_double == value_double;
	else if (type == 2)
	{
		char buffer[80];
		_itoa_s(value_double, buffer, 80, 10);
		if (str.MyStrCmp(MyString(buffer)) == 0)
			return true;
		else
			return false;
	}
}

bool var::operator==(const MyString& str)const // operator equal for str
{
	if (type == -1)
		return false;
	else if (type == 0)
	{
		return var_int == atoi(str.My_Str_Pointer());
	}
	else if (type == 1)
	{
		return var_double == strtod(str.My_Str_Pointer(), nullptr);
	}
	else if (type == 2)
	{
		if (str.MyStrCmp(str) == 0)
			return true;
		else
			return false;
	}
}

bool var::operator==(const char* str)const // operator equal  for const char*
{
	return (*this == MyString(str));
}

bool var::operator==(const var& obj)const // operator equal for obj a == b
{
	if (obj.type == 0)
		return *this == obj.var_int;
	else if (obj.type == 1)
		return *this == obj.var_double;
	else if (obj.type == 2)
		return *this == obj.str;
	else
		return false;
}


bool var::operator!=(int value_int)const // operator not equal for int
{
	return !(*this == value_int);
}


bool var::operator!=(double value_double)const // operator not equal for double
{
	return !(*this == value_double);
}

bool var::operator!=(const MyString& str)const // operator not equal for str
{
	return !(*this == str);
}

bool var::operator!=(const char* str)const // operator not equal for const char* str
{
	return !(*this == str);
}

bool var::operator!=(const var& obj)const // operator not equal for obj a!=b
{
	return !(*this == obj);
}


bool var::operator<(int value_int)const // operator less for int
{
	if (type == -1)
		return false;
	else if (type == 0)
		return var_int < value_int;
	else if (type == 1)
		return var_double < (double)value_int;
	else if (type == 2)
	{
		char buffer[80];
		_itoa_s(value_int, buffer, 80, 10);
		if (str.MyStrCmp(MyString(buffer)) < 0)
			return true;
		else
			return false;
	}
	return false;
}


bool var::operator<(double value_double)const // operator less for double
{
	if (type == -1)
		return false;
	else if (type == 0)
		return var_int < (int)value_double;
	else if (type == 1)
		return var_double < value_double;
	else if (type == 2)
	{
		char temp_str[20];
		_itoa_s(int(value_double * 1000), temp_str, 20, 10);
		temp_str[strlen(temp_str) - 1] = temp_str[strlen(temp_str) - 2];
		temp_str[strlen(temp_str) - 2] = temp_str[strlen(temp_str) - 3];
		temp_str[strlen(temp_str) - 3] = '.';
		if (str.MyStrCmp(MyString(temp_str)) < 0)
			return true;
		else
			return false;
	}
}

bool var::operator<(const MyString& str)const // operator less for str
{
	if (type == -1)
		return false;
	else if (type == 0)
	{
		return var_int < atoi(str.My_Str_Pointer());
	}
	else if (type == 1)
	{
		return var_double < strtod(str.My_Str_Pointer(), nullptr);
	}
	else if (type == 2)
	{
		if (str.MyStrCmp(str) < 0)
			return true;
		else
			return false;
	}
}

bool var::operator<(const char* str)const // operator less for const char* str
{
	return (*this == MyString(str));
}

bool var::operator<(const var& obj)const // operator less for obj a < b
{
	if (obj.type == 0)
		return *this < obj.var_int;
	else if (obj.type == 1)
		return *this < obj.var_double;
	else if (obj.type == 2)
		return *this < obj.str;
	else
		return false;
}



bool var::operator>(int value_int)const // operator more for int
{
	return ((*this != value_int) && !(*this < value_int));
}


bool var::operator>(double value_double)const // operator more for double
{
	return ((*this != value_double) && !(*this < value_double));
}

bool var::operator>(const MyString& str)const // operator more for str
{
	return ((*this != str) && !(*this < str));
}

bool var::operator>(const char* str)const // operator more for const char* str
{
	return ((*this != str) && !(*this < str));
}
 
bool var::operator>(const var& obj)const // operator more for obj a > b
{
	return ((*this != obj) && !(*this < obj));
}


bool var::operator<=(int value_int)const // operator less or equal for int
{
	return ((*this < value_int) || (*this == value_int));
}


bool var::operator<=(double value_double)const // operator less or equal for double
{
	return ((*this < value_double) || (*this == value_double));
}

bool var::operator<=(const MyString& str)const // operator less or equal for str
{
	return ((*this < str) || (*this == str));
}

bool var::operator<=(const char* str)const // operator less or equal for const char* str
{
	return ((*this < str) || !(*this == str));
}

bool var::operator<=(const var& obj)const // operator less or equal for obj a <= b
{
	return ((*this < obj) || !(*this == obj));
}


bool var::operator>=(int value_int)const // operator more or equal for int
{
	return ((*this > value_int) || (*this == value_int));
}


bool var::operator>=(double value_double)const // operator more or equal for double
{
	return ((*this > value_double) || (*this == value_double));
}

bool var::operator>=(const MyString& str)const // operator more or equal for str
{
	return ((*this > str) || (*this == str));
}

bool var::operator>=(const char* str)const // operator more or equal for const char* str
{
	return ((*this > str) || !(*this == str));
}

bool var::operator>=(const var& obj) const // operator more or equal for obj a >= b
{
	return ((*this > obj) || !(*this == obj));
}

MyString var::Get_Var_Str() const { // getter for str
	return str;
}

double var::Get_Var_Double()const { // getter for double
	return var_double;
}

int var::Get_Var_Int()const { // getter for int
	return var_int;
}

const char* var::Get_Var_Const_Char()const { // getter for const char*
	char* temp_str = new char[str.My_Strlen() + 1];
	strcpy_s(temp_str, str.My_Strlen() + 1, str.My_Str_Pointer());
	return temp_str;
}


short var::Get_Type()const { // gette type
	return type;
}
