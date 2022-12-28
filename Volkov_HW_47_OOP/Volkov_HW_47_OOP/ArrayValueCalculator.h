#pragma once
#include <string>
#include "Exception.h"

using namespace std;


class ArrayValueCalculator : public Exception
{
public:
	ArrayValueCalculator() = default;
	short doCalc(string arr[4][4], int row, int col);
	short Output();
};

