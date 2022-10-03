#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(const char* value_name, int value_age)
{
    name = new char[strlen(value_name) + 1];
    strcpy_s(name, strlen(value_name) + 1, value_name);

    age = value_age;
}

Person::Person(const Person& obj)
{
    name = new char[strlen(obj.name) + 1];
    strcpy_s(name, strlen(obj.name) + 1, obj.name);

}

Person& Person::operator=(Person& obj)
{
    if (name != nullptr) {
        delete[] name;
    }
    name = obj.name;
    obj.name = nullptr;
    return *this;
}

void Person::Print()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

Person::~Person()
{
    delete[] name;
}
