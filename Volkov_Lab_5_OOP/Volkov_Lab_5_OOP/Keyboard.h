#pragma once
#include <iostream>
#include <string>

using namespace std;

class Keyboard
{
	string model;
public:
	Keyboard();
	Keyboard(string value_model);
	void Show();
};

