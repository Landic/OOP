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
	MyArray();
	MyArray(int s);// size=s; capacity=size;
	MyArray(const MyArray& obj);
	void Random();
	void Print();
	int Get_Size();
	void Set_Size(int value_size, int grow);
	int Get_Upper_Bound(int value_size);
	bool IsEmpty();
	void FreeExtra();
	void RemoveAll();
	int GetAt(int index);
	void SetAt(int index, T number);
	int operator[](int index);
	void Add(T number);
	void Append(MyArray<T>& value_arr);
	T* Get_Data();
	void Insert_At(MyArray& value_arr, int index);
	void Remove_Ar(int index1, int index2);
	~MyArray();
	MyArray& operator=(const MyArray& obj);
};

template<class T>
MyArray<T>::MyArray()
{
	arr = nullptr;
	size = 0;
	capacity = 0;
}

template<class T>
MyArray<T>::MyArray(int value_size)
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
void MyArray<T>::Random() {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 * 1.6;
	}
}

template<class T>
void MyArray<T>::Print()
{
	for (int i = 0; i < size; i++) {
		cout << " " << arr[i];
	}
	cout << endl;
}

template<class T>
int MyArray<T>::Get_Size()
{
	return size;
}

template<class T>
void MyArray<T>::Set_Size(int value_size, int grow)
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
int MyArray<T>::Get_Upper_Bound(int value_size)
{
	return size - 1;
}

template<class T>
bool MyArray<T>::IsEmpty()
{
	if (size == 0) {
		return true;
	}
	else 
		return false;
}

template<class T>
void MyArray<T>::FreeExtra()
{
	if (size < capacity) {
		capacity = capacity - size;
	}
}

template<class T>
void MyArray<T>::RemoveAll()
{
	size = 0;
	capacity = 0;
}

template<class T>
int MyArray<T>::GetAt(int index)
{
	return arr[index];
}

template<class T>
void MyArray<T>::SetAt(int index, T number)
{
	arr[index] = number;
}

template<class T>
int MyArray<T>::operator[](int index)
{
	return arr[index];
}

template<class T>
void MyArray<T>::Add(T number)
{
	Set_Size(size + 1, 1);
	arr[size - 1] = number;
}

template<class T>
void MyArray<T>::Append(MyArray<T>& value_arr)
{
	int temp = size + value_arr.size;
	Set_Size(temp, value_arr.size);
	for (int i = size - value_arr.size, k = 0; i < size; i++, k++)
	{
		arr[i] = value_arr.arr[k];
	}
}

template<class T>
T* MyArray<T>::Get_Data()
{
	return arr;
}

template<class T>
void MyArray<T>::Insert_At(MyArray& value_arr, int index)
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
inline void MyArray<T>::Remove_Ar(int index1, int index2)
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
MyArray<T>::~MyArray()
{
	delete[] arr;
	size = 0;
	capacity = 0;
}

template<class T>
MyArray<T>& MyArray<T>::operator=(const MyArray& obj)
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
