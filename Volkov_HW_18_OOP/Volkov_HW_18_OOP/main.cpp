#include <iostream>
#include "Circle.h"
#include "CircleInsideSquare.h"
#include "Square.h"

using namespace std;

int main() {
	Circle obj1(4000);
	Square obj2(10);
	CircleInsideSquare obj3(180,390);
	if (obj3.Check() == true) { // if obj3 check return true
		cout << "Circle inside" << endl;
	}
	else {
		cout << "Circle not inside" << endl;
	}
}