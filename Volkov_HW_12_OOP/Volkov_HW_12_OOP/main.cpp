#include <iostream>
#include "MyArray.h"

using namespace std;

int main() {
	MyArray<int> arr(5);
	arr.Random();
	arr.Print();
	cout << endl << arr.Get_Size() << endl;
	arr.Set_Size(6, 6);
	cout << endl << arr.Get_Size() << endl;
	arr.Print();
	if (arr.IsEmpty() == true) {
		cout << "Array didn't have elements" << endl;
	}
	else {
		cout << endl << "Array have elements" << endl;
	}
	arr.FreeExtra();
	arr.Print();
	cout << endl << "Elements: " << arr[1] << endl;
	arr.SetAt(1,1);
	arr.Print();
	arr.Add(5);
	arr.Print();
	MyArray<int> arr2(5);
	arr2.Random();
	arr2.Print();
	arr2.Append(arr);
	arr2.Print();
	arr2.Print();
	arr.Insert_At(arr2, 2);
	arr.Print();
	arr.Remove_Ar(1, 2);
}