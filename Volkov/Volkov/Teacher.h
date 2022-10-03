#pragma once
#include "Person.h"
class Teacher : public Person
{
	char* school;
public:
	Teacher() = default;
	Teacher(const char* value_name, int value_age, const char* value_school);
	Teacher(const Teacher& obj);
	Teacher& operator=(Teacher& obj);
	void Print();
	~Teacher();
};

