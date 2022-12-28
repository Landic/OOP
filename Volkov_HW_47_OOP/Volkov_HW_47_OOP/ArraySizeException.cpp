#include "ArraySizeException.h"
#include <iostream>

using namespace std;


short ArraySizeException::Output()
{
	cout << "ArraySizeException error!" << endl;
	return -2;
}
