#include <iostream>
#include "Animal.h"
#include "Fox.h"
#include "Rabbit.h"
#include "Location.h"

using namespace std;

int main() {
	Fox obj1;
	Rabbit obj2;
	Location obj3;
	obj1.Init();
	system("cls");
	obj2.Init();
	system("cls");
	obj3.Init();
	system("cls");
	obj1.Show();
	obj2.Show();
	obj3.Show();
	obj3.Life(obj1, obj2);
}