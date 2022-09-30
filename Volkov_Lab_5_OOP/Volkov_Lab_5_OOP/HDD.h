#pragma once
#include <iostream>
#include <string>

using namespace std;

class HDD
{
	string name;
	string memory;
public:
	HDD();
	HDD(string value_name, string value_memory);
	void Show();
};

