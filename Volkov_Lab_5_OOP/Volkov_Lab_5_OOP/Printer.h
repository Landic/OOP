#pragma once
#include <iostream>
#include <string>

using namespace std;

class Printer
{
	string model;
public:
	Printer();
	Printer(string value_model);
	Printer(Printer& obj);
	void Show();
};

