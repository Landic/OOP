#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
using namespace std;

class Exeptions {
public:
	Exeptions() = default;
	virtual short Print() = 0;
};
class ArraySizeException :public Exeptions{
public:
	ArraySizeException() = default;
	virtual short Print() { return -1;}
};
class ArrayDataException :public Exeptions {
public:
	ArrayDataException() = default;
	virtual short Print() { return -2;}
};
class ArrayValueCalculator {
public:
	ArrayValueCalculator() = default;
	short doCalc(string arr[4][4], short rows, short cols) {
		try {
			if (rows != 4 || cols != 4) {
				ArraySizeException SizeObj;
				throw SizeObj.Print();
			}
		}
		catch (short Err) {
			if (Err == -1) {
				cout << "ArraySizeException, код: ";
				return Err;
			}
		}
		short sum = 0;
		int arr2[4][4];
		for (short i = 0; i < rows; i++) {
			for (short j = 0; j < cols; j++) {
				arr2[i][j] = atoi(arr[i][j].c_str());
				try {
					if (arr2[i][j] == 0) {
						ArrayDataException DataObj;
						throw DataObj.Print();
					}
				}
				catch (short Err) {
					if (Err == -2) {
						cout << "ArrayDataException, код: ";
						return Err;
					}
				}
				sum += arr2[i][j];
			}
		}
		return sum;
	}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	string mass[4][4];
	for (short i = 0; i < 4; i++) {
		for (short j = 0; j < 4; j++) {
			mass[i][j] = rand() % 100;
		}
	}
	cout << endl;
	ArrayValueCalculator ArrCalc;
	cout << ArrCalc.doCalc(mass, 4, 4) << endl;
}