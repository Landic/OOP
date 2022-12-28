#include "ArrayValueCalculator.h"
#include "ArraySizeException.h"
#include "ArrayDataException.h"
#include <iostream>

using namespace std;

short ArrayValueCalculator::doCalc(string arr[4][4], int row, int col)
{
	try {
		if (row != 4 || col != 4) {
			ArraySizeException SizeObj;
			throw SizeObj.Output();
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
	for (short i = 0; i < row; i++) {
		for (short j = 0; j < col; j++) {
			arr2[i][j] = atoi(arr[i][j].c_str());
			try {
				if (arr2[i][j] == 0) {
					ArrayDataException DataObj;
					throw DataObj.Output();
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

short ArrayValueCalculator::Output()
{
	return 0;
}
