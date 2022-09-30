#include "Video_Card.h"
#include <iostream>
#include <string>

using namespace std;

Video_Card::Video_Card()
{
	model = nullptr;
	memory = 0;
}

Video_Card::Video_Card(string value_model, short value_memory)
{
	model = value_model;
	memory = value_memory;
}

void Video_Card::Show()
{
	cout << "|   Video card  |" << endl;
	cout << "|---------------|" << endl;
	cout << "|Model: " << model << "|" << endl;
	cout << "|Memory: " << memory << " GB  |" << endl;
	cout << "|---------------|" << endl;
}
