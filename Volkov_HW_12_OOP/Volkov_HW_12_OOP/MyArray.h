#pragma once
#include <iostream>

using namespace std;

template<class T = int>
class MyArray
{
	T* arr;
	int size;
	int capacity;
public:
	MyArray(); // default constructor
	MyArray(int s);// size=s; capacity=size; constructor accepting the size of an array
	MyArray(const MyArray& obj);
	void Random(); // array method fills with random numbers
	void Print(); // output
	int Get_Size(); // return size array
	void Set_Size(int value_size, int grow); // method sets array size
	int Get_Upper_Bound(int value_size); // method to get the last valid index
	bool IsEmpty(); // array check method is empty or not
	void FreeExtra(); // method removes extra memory
	void RemoveAll(); // delete all
	int GetAt(int index); // method to get a specific element by index
	void SetAt(int index, T number); // method to add a new value for a specific index
	int operator[](int index); // operator []
	void Add(T number); // method to add an element to an array
	void Append(MyArray<T>& value_arr); // array addition method arr + arr2
	T* Get_Data(); // getter return address of the array
	void Insert_At(MyArray& value_arr, int index); // method inserts an element at a specific position
	void Remove_Ar(int index1, int index2); // method to remove an element from a specific position
	~MyArray(); // destructor
	MyArray& operator=(const MyArray& obj); // assignment method
};

template<class T>
MyArray<T>::MyArray() // default constructor
{
	arr = nullptr;
	size = 0;
	capacity = 0;
}

template<class T>
MyArray<T>::MyArray(int value_size) // constructor accepting the size of an array
{
	capacity = size = value_size;
	arr = new T[value_size];
}

template<class T>
MyArray<T>::MyArray(const MyArray& obj)
{
	size = obj.size;
	arr = new T[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = obj.arr[i];
	}
}

template<class T>
void MyArray<T>::Random() { // array method fills with random numbers
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 * 1.6;
	}
}

template<class T>
void MyArray<T>::Print() // output
{
	for (int i = 0; i < size; i++) {
		cout << " " << arr[i];
	}
	cout << endl;
}

template<class T>
int MyArray<T>::Get_Size()// return size array
{
	return size;
}

template<class T>
void MyArray<T>::Set_Size(int value_size, int grow) // method sets array size
{
	if (size > value_size) {
		if (capacity > value_size)
			capacity += grow;
		size = value_size;
	}
	else
		size = value_size;
}

template<class T>
int MyArray<T>::Get_Upper_Bound(int value_size) // method to get the last valid index
{
	return size - 1;
}

template<class T>
bool MyArray<T>::IsEmpty() // array check method is empty or not
{
	if (size == 0) {
		return true;
	}
	else 
		return false;
}

template<class T>
void MyArray<T>::FreeExtra() // method removes extra memory
{
	if (size < capacity) {
		capacity = capacity - size;
	}
}

template<class T>
void MyArray<T>::RemoveAll() // delete all
{
	size = 0;
	capacity = 0;
}

template<class T>
int MyArray<T>::GetAt(int index) // method to get a specific element by index
{
	return arr[index];
}

template<class T>
void MyArray<T>::SetAt(int index, T number) // method to add a new value for a specific index
{
	arr[index] = number;
}

template<class T>
int MyArray<T>::operator[](int index) // operator []
{
	return arr[index];
}

template<class T>
void MyArray<T>::Add(T number) // method to add an element to an array
{
	Set_Size(size + 1, 1);
	arr[size - 1] = number;
}

template<class T>
void MyArray<T>::Append(MyArray<T>& value_arr) // array addition method arr + arr2
{
	int temp = size + value_arr.size;
	Set_Size(temp, value_arr.size);
	for (int i = size - value_arr.size, k = 0; i < size; i++, k++)
	{
		arr[i] = value_arr.arr[k];
	}
}

template<class T>
T* MyArray<T>::Get_Data() // getter return address of the array
{
	return arr;
}

template<class T>
void MyArray<T>::Insert_At(MyArray& value_arr, int index) // method inserts an element at a specific position
{
	MyArray<T> obj(*arr);
	for (int i = 0; i < size; i++)
	{
		obj.arr[i] = value_arr[i];
	}
	int temp = size + value_arr.size;
	Set_Size(temp, value_arr.size);
	for (int i = index + value_arr.size, j = index; i < size; i++, j++)
	{
		arr[i] = obj.arr[j];
	}
	for (int i = index, j = 0; i <= value_arr.size + 1; i++, j++)
	{
		arr[i] = value_arr[j];
	}
}

template<class T>
inline void MyArray<T>::Remove_Ar(int index1, int index2) // method to remove an element from a specific position
{
	MyArray<T> obj(arr);
	for (int i = 0; i < size; i++)
	{
		obj.arr[i] = arr[i];
	}
	for (int i = index1, j = index2 + 1; i <= index2; i++, j++)
	{
		arr[i] = obj.arr[i];
	}
	int temp = size - (index2 - index1 + 1);
	SetSize(temp, index2);
}

template<class T>
MyArray<T>::~MyArray() // destructor
{
	delete[] arr;
	size = 0;
	capacity = 0;
}

template<class T>
MyArray<T>& MyArray<T>::operator=(const MyArray& obj) // assignment method
{
	if (this == &obj) {
		return *this;
	}
	if (arr != nullptr) {
		this->~MyArray();
	}
	size = obj.size;
	capacity = obj.capacity;
	arr = new T[size];
	for (int i = 0; i < size; i++) {
		arr[i] = obj.arr[i];
	}
	return *this;
}
