#include "Keyboard.h"
#include <iostream>
#include <string>

using namespace std;

Keyboard::Keyboard()
{
	model = nullptr;
}

Keyboard::Keyboard(string value_model)
{
	model = value_model;
}

void Keyboard::Show()
{
	cout << "|    Keyboard   |" << endl;
	cout << "|---------------|" << endl;
	cout << "|Model: "<<model <<" |" << endl;
	cout << "|---------------|" << endl;
}
