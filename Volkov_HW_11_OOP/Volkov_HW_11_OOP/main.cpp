#include <iostream>
#include "var.h"

using namespace std;


// function operator

int operator+(int value_int, const var& obj) {
	var temp = value_int;
	temp = temp + obj;
	return temp.Get_Var_Int();
}

double operator+(double value_double, const var& obj) {
	var temp = value_double;
	temp = temp + obj;
	return temp.Get_Var_Double();
}

MyString operator+(const MyString& value_str, const var& obj) {
	var temp = value_str;
	temp = temp + obj;
	return temp.Get_Var_Str();
}

const char* operator+(const char* value_str, const var& obj) {
	var temp = value_str;
	temp = temp + obj;
	return temp.Get_Var_Const_Char();
}

int operator-(int value_int, const var& obj) {
	var temp = value_int;
	temp = temp - obj;
	return temp.Get_Var_Int();
}

double operator-(double value_double, const var& obj) {
	var temp = value_double;
	temp = temp - obj;
	return temp.Get_Var_Double();
}

MyString operator-(const MyString& value_str, const var& obj) {
	var temp = value_str;
	temp = temp - obj;
	return temp.Get_Var_Str();
}

const char* operator-(const char* value_str, const var& obj) {
	var temp = value_str;
	temp = temp - obj;
	return temp.Get_Var_Const_Char();
}

int operator/(int value_int, const var& obj) {
	var temp = value_int;
	temp = temp / obj;
	return temp.Get_Var_Int();
}

double operator/(double value_double, const var& obj) {
	var temp = value_double;
	temp = temp / obj;
	return temp.Get_Var_Double();
}

MyString operator/(const MyString& value_str, const var& obj) {
	var temp = value_str;
	temp = temp / obj;
	return temp.Get_Var_Str();
}

const char* operator/(const char* value_str, const var& obj) {
	var temp = value_str;
	temp = temp / obj;
	return temp.Get_Var_Const_Char();
}

int operator*(int value_int, const var& obj) {
	var temp = value_int;
	temp = temp * obj;
	return temp.Get_Var_Int();
}

double operator*(double value_double, const var& obj) {
	var temp = value_double;
	temp = temp * obj;
	return temp.Get_Var_Double();
}

MyString operator*(const MyString& value_str, const var& obj) {
	var temp = value_str;
	temp = temp * obj;
	return temp.Get_Var_Str();
}

const char* operator*(const char* value_str, const var& obj) {
	var temp = value_str;
	temp = temp * obj;
	return temp.Get_Var_Const_Char();
}

bool operator!=(int value_int, const var& obj) {
	return (obj != value_int);
}

bool operator!=(double value_double, const var& obj) {
	return (obj != value_double);
}

bool operator!=(const MyString& value_str, const var& obj) {
	return (obj != value_str);
}

bool operator!=(const char* value_str, const var& obj) {
	return (obj != value_str);
}

bool operator==(int value_int, const var& obj) {
	return (obj == value_int);
}

bool operator==(double value_double, const var& obj) {
	return (obj == value_double);
}

bool operator==(const MyString& value_str, const var& obj) {
	return (obj == value_str);
}

bool operator==(const char* value_str, const var& obj) {
	return (obj == value_str);
}

bool operator<(int value_int, const var& obj) {
	return (obj > value_int);
}

bool operator<(double value_double, const var& obj) {
	return (obj > value_double);
}

bool operator<(const MyString& value_str, const var& obj) {
	return (obj > value_str);
}

bool operator<(const char* value_str, const var& obj) {
	return (obj > value_str);
}

bool operator>(int value_int, const var& obj) {
	return (obj < value_int);
}

bool operator>(double value_double, const var& obj) {
	return (obj < value_double);
}

bool operator>(const MyString& value_str, const var& obj) {
	return (obj < value_str);
}

bool operator>(const char* value_str, const var& obj) {
	return (obj < value_str);
}

bool operator<=(int value_int, const var& obj) {
	return (obj >= value_int);
}

bool operator<=(double value_double, const var& obj) {
	return (obj >= value_double);
}

bool operator<=(const MyString& value_str, const var& obj) {
	return (obj >= value_str);
}

bool operator<=(const char* value_str, const var& obj) {
	return (obj >= value_str);
}

bool operator>=(int value_int, const var& obj) {
	return (obj <= value_int);
}

bool operator>=(double value_double, const var& obj) {
	return (obj <= value_double);
}

bool operator>=(const MyString& value_str, const var& obj) {
	return (obj <= value_str);
}

bool operator>=(const char* value_str, const var& obj) {
	return (obj <= value_str);
}

int main() {
	var a = 15;
	var b = "Hello";
	var d = "50";
	b = a + d;
	var x = 4;
	var y = 2;
	b.Show();
	b = x + y;
	b.Show();
	b = x - y;
	b.Show();
	b = x * y;
	b.Show();
	b = x / y;
	b.Show();
	x += y;
	x.Show();
	x -= y;
	x.Show();
	x *= y;
	x.Show();
	x /= y;
	x.Show();
	if (a == b)
		cout << "Equal" << endl;
	else
		cout << "Not Equal" << endl;
	if (a != b)
		cout << "Not Equal" << endl;
	else
		cout << "Equal" << endl;
	if (a < b)
		cout << "a < b" << endl;
	else
		cout << "a > b" << endl;
	if (a > b)
		cout << "a > b" << endl;
	else
		cout << "a < b" << endl;
	if (a >= b)
		cout << "a >= b" << endl;
	else
		cout << "a < b" << endl;
	if (a <= b)
		cout << "a <= b" << endl;
	else
		cout << "a > b" << endl;
	var j = 10, k = "120", c;
	c = j + k;
	c.Show(); // ֲûגוהוע 130
	c = j + k;
	c.Show(); // ֲûגוהוע “12010”
	var l = "Microsoft", p = "Windows";
	c = l * p;
	c.Show();
	c = l / p;
	c.Show();
}