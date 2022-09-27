#include <iostream>
#include "Queue.h"
#include <Windows.h>

using namespace std;

int main() {
	Queue<int> b;
	int size = 10;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter...  ";
		cin >> arr[i];
		b.Add(arr[i]);
	}
	system("cls");
	cout << "\t\t -----" << endl;
	cout << "\t\t|First|" << endl;
	cout << "\t\t -----" << endl;
	b.Show();
	Sleep(2000);
	system("cls");
	while (!b.IsEmpty()) {
		b.Show();
		b.Extract();
	}
}