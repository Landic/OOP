#include <iostream>
#include "Transport.h"
#include "Jeep.h"
#include "Bike.h"
#include "Plane.h"
#include "Truck.h" 
#include "Vessel.h"

using namespace std;

void Print_Menu();

int main() {
	Transport* ptr = nullptr;
	short choice;
	Print_Menu();
	cout << "Enter... ";
	cin >> choice;
	switch (choice) {
	case 1:
		ptr = new Jeep();
		break;
	case 2:
		ptr = new Plane();
		break;
	case 3:
		ptr = new Bike();
		break;
	case 4:
		ptr = new Truck();
		break;
	case 5:
		ptr = new Vessel();
		break;
	default:
		break;
	}
	system("CLS");
	ptr->Init();
	ptr->Show();
	delete[] ptr;
}

void Print_Menu()
{
	cout << " ----------" << endl;
	cout << "|1. Jeep   |" << endl;
	cout << "|----------|" << endl;
	cout << "|2. Plane  |" << endl;
	cout << "|----------|" << endl;
	cout << "|3. Bike   |" << endl;
	cout << "|----------|" << endl;
	cout << "|4. Truck  |" << endl;
	cout << "|----------|" << endl;
	cout << "|5. Vessel |" << endl;
	cout << " ----------" << endl;
}
