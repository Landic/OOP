#pragma once
#include <iostream>
#include <string>
#include "Printer.h"
#include "HDD.h"
#include "Keyboard.h"
#include "RAM.h"
#include "Video_Card.h"

using namespace std;

class Laptop
{
	string name;
	Printer* obj;
	RAM ram;
	Keyboard keyboard;
	HDD hdd;
	Video_Card video_card;
public:
	Laptop(Printer* value_printer, string hdd_name, string hdd_memory, string keyboard_model, string ram_model, short ram_memory, string video_card_model, short video_card_memory, string name_laptop);
	void Show();
};

