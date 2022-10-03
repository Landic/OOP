#pragma once
class Person
{
protected:
	char* name;
	int age;
public:
	Person() = default;
	Person(const char* value_name, int value_age);
	Person(const Person& obj);
	Person& operator=(Person& obj);
	void Print();
	~Person();
};

