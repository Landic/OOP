#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(const char* value_name, int value_age, const char* value_academy) :Person(value_name, value_age)
{
	academy = new char[strlen(value_academy) + 1];
	strcpy_s(academy, strlen(value_academy) + 1, value_academy);
}

Student::Student(const Student& obj) : Person(obj.name, obj.age)
{
	academy = new char[strlen(obj.academy) + 1];
	strcpy_s(academy, strlen(obj.academy) + 1, obj.academy);
}

Student& Student::operator=(Student& obj)
{
	if (academy != nullptr) {
		delete[] academy;
	}
	academy = obj.academy;
	obj.academy = nullptr;
	return *this;
}

void Student::Print()
{
	Person::Print();
	cout << "Academy: " << academy << endl;
}

Student::~Student()
{
	delete[] academy;
}
