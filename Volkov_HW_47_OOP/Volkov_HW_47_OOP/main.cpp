#include <iostream>
#include "Exception.h"
#include "ArrayValueCalculator.h"
#include "ArrayDataException.h"
#include "ArraySizeException.h"
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	string mass[4][4];
	for (short i = 0; i < 4; i++) {
		for (short j = 0; j < 4; j++) {
			mass[i][j] = to_string(rand() % 100);
		}
	}
	cout << endl;
	ArrayValueCalculator ArrCalc;
	cout << ArrCalc.doCalc(mass, 4, 4) << endl;
}