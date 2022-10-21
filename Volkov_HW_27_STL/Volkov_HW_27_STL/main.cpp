#include <iostream>
#include <list>
#include <Windows.h>
#include"Animal.h"
#include <string>
using namespace std;



int main()
{
	Animal* ptr = nullptr;
	list<Animal> mylist;
	list<Animal>::iterator it = mylist.begin();
	int index = 0;
	int choose = 0;
	// menu
	while (true) {
		cout << "1. Add animal\n2. Delete animal\n3. Search animal\n4. Add to the position\n5. Output\n6. Redact and search\n7. Exit" << endl;
		cout << "Enter... ";
		cin >> choose;
		system("cls");
		switch (choose) {
			// add animal
		case 1:
			while (true) {
				// user choose animal add
				cout << "1. Add elephant\n2. Add pinguen\n3. Add parrot\n4. Add dog\n5. Back" << endl;
				cout << "Enter... ";
				cin >> choose;
				system("cls");
				switch (choose) {
				case 1: // add elephant
					cout << "Create elephant..." << endl;
					mylist.push_front(Elephant("Elephant", 2, "Africa"));
					Sleep(1000);
					system("cls");
					continue;
				case 2:// add pinguin
					cout << "Create pinguin..." << endl;
					mylist.push_front(Pinguin("Pinguin", 3, "Antarctida"));
					Sleep(1000);
					system("cls");
					continue;
				case 3: // add parrot
					cout << "Create parrot..." << endl;
					mylist.push_front(Parrot("Parrot", 1, "Jungle"));
					Sleep(1000);
					system("cls");
					continue;
				case 4: // add dog
					cout << "Create dog..." << endl;
					mylist.push_front(Dog("Dog", 3, "Europa"));
					Sleep(1000);
					system("cls");
					continue;
				case 5: // back
					break;
				}
				break;
			}
			system("cls");
			continue;
		case 2: // deleted animal
			cout << "Deleting..." << endl;
			mylist.clear();
			Sleep(1000);
			system("cls");
			continue;
		case 3: // search animal by user
			cout << "Enter animal position to search" << endl;
			cout << "Enter... ";
			int position;
			cin >> position;
			system("cls");
			if (position >= 0 && position < mylist.size()) {
				for (int i = 0; i <= position; i++)
				{
					if (i == position) it->Print();
					it++;
				}
			}
			else 
				cout << "No such position";
		case 4: // add animal in the position by user
			while(true){
				cout << "1. Add elephant\n2. Add pinguen\n3. Add parrot\n4. Add dog\n5. Back" << endl;
				cout << "Enter... ";
				cin >> choose;
				system("cls");
				switch (choose) {
				case 1:
					cout << "Enter position" << endl;
					cout << "Enter... ";
					cin >> index;
					system("cls");
					cout << "Add elephant position...";
					advance(it, index);
					mylist.insert(it, Elephant("Elephant", 20, "Africa"));
					Sleep(1000);
					system("cls");
					continue;
				case 2:
					cout << "Enter position" << endl;
					cout << "Enter... ";
					cin >> index;
					system("cls");
					cout << "Add elephant position...";
					advance(it, index);
					mylist.insert(it, Pinguin("Pinguin", 2, "Antarctida"));
					Sleep(1000);
					system("cls");
					continue;
				case 3:
					cout << "Enter position" << endl;
					cout << "Enter... ";
					cin >> index;
					system("cls");
					cout << "Add elephant position...";
					advance(it, index);
					mylist.insert(it, Parrot("Parrot", 1, "Asia"));
					Sleep(1000);
					system("cls");
					continue;
				case 4:
					cout << "Enter position" << endl;
					cout << "Enter... ";
					cin >> index;
					system("cls");
					cout << "Add elephant position...";
					advance(it, index);
					mylist.insert(it, Dog("Dog", 3, "Asia"));
					Sleep(1000);
					system("cls");
					continue;
				case 5:
					break;
			}
			break;
		}
		system("cls");
		continue;
		case 5: // output
			for (list<Animal>::iterator i = mylist.begin(); i != mylist.end(); i++)
			{
				i->Print();
				cout << endl;
			}
			cout << "1. Back" << endl;
			cin >> choose;
			if (choose == 1) {
				system("cls");
				continue;
			}
		case 6: // search and redact animal
			cout << "Enter animal to edit" << endl;
			cout << "Enter... ";
			string edit_animal;
			cin >> edit_animal;
			system("cls");
			cout << "Enter new animal" << endl;
			cout << "Enter... ";
			string new_animal;
			cin >> new_animal;
			system("cls");
			while (*it != edit_animal) {
				it++;
			}

			if (*it == edit_animal) {
				*it = new_animal;
			}
			else 
				cout << "No such animal";
			system("cls");
			continue;
		case 7: // exit program
			cout << "Exit..." << endl;
			Sleep(1000);
			system("cls");
			break;
		}
		break;
	}
}