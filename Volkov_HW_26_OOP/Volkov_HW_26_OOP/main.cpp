#include <iostream>

using namespace std;

template<class T>
class MySharedPtr {
	T* ptr;
	static int count;
public:
	MySharedPtr() {
		ptr = nullptr;
	}
	MySharedPtr(T* obj) {
		ptr = obj;
		count++;
	}
	MySharedPtr(const MySharedPtr<T>& obj) {
		ptr = obj.ptr;
		count++;
	}
	int getcount() {
		return count;
	}
	T* get() {
		return ptr;
	}
	~MySharedPtr() {
		if (count == 1) {
			delete ptr;
		}
		else {
			count--;
		}
	}
};

template<class T>
int MySharedPtr<T>::count = 0;

class Point {
	int number;
public:
	Point(int value_number) {
		number = value_number;
	}
	int Get_Number() {
		return number;
	}
};


int main() {
	MySharedPtr<Point> ptr1(new Point(1));
	cout << ptr1.get() << endl << ptr1.get()->Get_Number() << endl;
	MySharedPtr<Point> ptr2(new Point(5));
	cout << ptr2.get() << endl << ptr2.get()->Get_Number() << endl;
	cout << ptr2.getcount();
}