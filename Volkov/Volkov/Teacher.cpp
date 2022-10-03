#include "Teacher.h"
#include <iostream>

using namespace std;

Teacher::Teacher(const char* value_name, int value_age, const char* value_school):Person(value_name, value_age)
{
	school = new char[strlen(value_school) + 1];
	strcpy_s(school, strlen(value_school) + 1, value_school);
}

Teacher::Teacher(const Teacher& obj) : Person(obj.name, obj.age)
{
	school = new char[strlen(obj.school) + 1];
	strcpy_s(school, strlen(obj.school) + 1, obj.school);
}

Teacher& Teacher::operator=(Teacher& obj)
{
	if (school != nullptr) {
		delete[] school;
	}
	school = obj.school;
	obj.school = nullptr;
	return *this;
}

void Teacher::Print()
{
	Person::Print();
	cout << "School: " << school << endl;
}

Teacher::~Teacher()
{
	delete[] school;
}
