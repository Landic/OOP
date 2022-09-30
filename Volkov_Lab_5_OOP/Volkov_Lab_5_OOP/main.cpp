#include <iostream>
#include <Windows.h>
#include "Printer.h"
#include "Laptop.h"

using namespace std;

int main() {
	Printer obj{"HP BLACK"};
	Laptop* ptr = new Laptop(&obj, "Seagate", "2 TB", "Varmilo", "HyperX", 16, "RTX 3060", 12, "MSI");
	ptr->Show();
	delete ptr;
}