#include "Laptop.h"
#include <iostream>
#include <string>

using namespace std;

Laptop::Laptop(Printer* value_printer, string hdd_name, string hdd_memory, string keyboard_model, string ram_model, short ram_memory, string video_card_model, short video_card_memory, string name_laptop):obj(value_printer),hdd(hdd_name, hdd_memory),keyboard(keyboard_model), ram(ram_model,ram_memory), video_card(video_card_model, video_card_memory)
{
	name = name_laptop;
}

void Laptop::Show()
{
	cout << " --------------- " << endl;
	cout << "|    Laptop     |" << endl;
	cout << "|---------------|" << endl;
	cout << "|Name: " << name << "      |" << endl;
	hdd.Show();
	keyboard.Show();
	ram.Show();
	video_card.Show();
	obj->Show();
}
