#include <iostream>
#include <Windows.h>
#include "Base.h"
#include "Vehicle.h"
#include "Bus.h"
#include "Truck.h"

using namespace std;

int main() {

	short choose;
	Base base; // object base
	Vehicle* ptr = nullptr; //  pointer to cars
	// Menu
	while (true) {
		cout << "1. Base\n2. Vehicles\n3. Exit" << endl;
		cin >> choose;
		system("cls");
		switch (choose)
		{
		case 1:

			while (true) {
				cout << "1. Init\n2. Show\n3. Exit" << endl;
				cin >> choose;
				system("cls");
				switch (choose)
				{
				case 1:
					base.Init();
					continue;
				case 2:
					base.Show();
					cout << "1. Back" << endl;
					cin >> choose;
					system("cls");
					continue;
				case 3:
					cout << "Exit..." << endl;
					system("cls");
					break;
				default:
					cout << "Error" << endl;
					system("cls");
					continue;
				}
				break;
			}
			continue;
		case 2:
			while (true) {
				cout << "1. Bus\n2. Truck\n3. Exit" << endl;
				cin >> choose;
				system("cls");
				switch (choose) {
				case 1:
					ptr = new Bus();
					while (true) {
						cout << "1. Init\n2. Show\n3. Arrive\n4. Leave\n5. Exit" << endl;
						cin >> choose;
						system("cls");
						switch (choose) {
						case 1:
							ptr->Init();
							continue;
						case 2:
							ptr->Show();
							cout << "1. Back" << endl;
							cin >> choose;
							system("cls");
							continue;
						case 3:
							ptr->Arrive();
							continue;
						case 4:
							ptr->Leave();
							continue;
						case 5:
							cout << "Exit..." << endl;
							system("cls");
							break;
						default:
							cout << "Error!" << endl;
							continue;
						}
						break;
					}
					continue;
				case 2:
					ptr = new Truck();
					while (true) {
						cout << "1. Init\n2. Show\n3. Arrive\n4. Leave\n5. Exit" << endl;
						cin >> choose;
						system("cls");
						switch (choose) {
						case 1:
							ptr->Init();
							continue;
						case 2:
							ptr->Show();
							cout << "1. Back" << endl;
							cin >> choose;
							system("cls");
							continue;
						case 3:
							ptr->Arrive();
							continue;
						case 4:
							ptr->Leave();
							continue;
						case 5:
							cout << "Exit..." << endl;
							system("cls");
							break;
						default:
							cout << "Error!" << endl;
							continue;
						}
						break;
					}
					continue;
				case 3:
					cout << "Exit..." << endl;
					system("cls");
					break;
				default:
					cout << "Error" << endl;
					system("cls");
					continue;
				}
				break;
			}
			continue;
		case 3:
			cout << "Exit..." << endl;
			system("cls");
			break;
		default:
			cout << "Error";
			continue;
		}
		break;
	}
	delete ptr;
}
// we initialize static variables because without initialization there will be an error and the main thing 
// is that they be in the main files, otherwise it is also an error
int Base::people_on_base = 0;
int Base::vehicles_on_base = 0;
double Base::petrol_on_base = 0;
double Base::goods_on_base = 0;