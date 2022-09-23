#include <iostream>
#include "MyArray.h"

using namespace std;

int main() {
	MyArray<int> arr(5); // create obj
	arr.Random(); // call method random
	arr.Print(); // call method print
	cout << endl << arr.Get_Size() << endl; // output size of array
	arr.Set_Size(6, 6); // set size array
	cout << endl << arr.Get_Size() << endl; // output size of array
	arr.Print(); // call method print
	if (arr.IsEmpty() == true) { // check empty array or not
		cout << "Array didn't have elements" << endl;
	}
	else {
		cout << endl << "Array have elements" << endl;
	}
	arr.FreeExtra(); // call method freeextra
	arr.Print(); // call method print
	cout << endl << "Elements: " << arr[1] << endl; // return element of array
	arr.SetAt(1,1); // set new element
	arr.Print(); // call method print
	arr.Add(5); // add 5
	arr.Print(); // call method print
	MyArray<int> arr2(5);
	arr2.Random(); // random
	arr2.Print(); // call method print
	arr2.Append(arr);
	arr2.Print(); // call method print
	arr2.Print(); // call method print
	arr.Insert_At(arr2, 2);
	arr.Print(); // call method print
	arr.Remove_Ar(1, 2);
}