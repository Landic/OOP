#pragma once
#include "Person.h"
class Student : public Person
{
	char* academy;
public:
	Student() = default;
	Student(const char* value_name, int value_age, const char* value_academy);
	Student(const Student& obj);
	Student& operator=(Student& obj);
	void Print();
	~Student();
};

