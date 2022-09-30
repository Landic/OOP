#pragma once
#include <iostream>
#include <string>

using namespace std;

class Video_Card
{
	string model;
	short memory;
public:
	Video_Card();
	Video_Card(string value_model, short value_memory);
	void Show();
};

