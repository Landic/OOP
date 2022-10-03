#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main() {
	Person obj1("Joe",18);
	Teacher obj2("Obama",36,"31");
	Student obj3("Joe",20,"Oxford");
	obj1.Print();
	cout << endl << endl;
	obj2.Print();
	cout << endl << endl;
	obj3.Print();
}