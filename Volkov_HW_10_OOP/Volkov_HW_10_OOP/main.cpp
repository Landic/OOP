#include <iostream>
#include "Matrix.h"

using namespace std;

class Point {
	int x;
	int y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int value_x, int value_y) {
		x = value_x;
		y = value_y;
	}


	Point operator+(int value_a) {
		Point temp(*this);
		temp.x += value_a;
		temp.x += value_a;
		return temp;
	}

	Point operator=(int obj) {

		x = obj;
		y = obj;
		return *this;
	}

	bool operator>(const Point obj) {
		if (x > obj.x && y > obj.y) {
			return true;
		}
		return false;
	}


	Point& operator+=(int a) {
		x += a;
		y += a;
		return *this;
	}

	//Point& operator+=(int a) {
	//	x += a;
	//	y += a;
	//	return *this;
	//}

	int Get_X()const {
		return x;
	}

	int Get_Y()const {
		return y;
	}

	void Set_X(int value_x) {
		x = value_x;
	}

	void Set_Y(int value_y) {
		y = value_y;
	}

};


ostream& operator<<(ostream& os, Point& obj)
{
	os << obj.Get_X() << endl;
	os << obj.Get_Y() << endl;

	return os;
}

Point operator+(int a, const Point& obj) {
	Point rez;
	rez.Set_X(obj.Get_X() + a);
	rez.Set_Y(obj.Get_Y() + a);
	return rez;
}


int main() {
	Matrix<int> obj1(3, 5);
	obj1.Rand();
	obj1.Print();
	cout << "\n---------------------------------------\n";
	Matrix<int> b;
	b = obj1;
	b.Print();
	cout << "------------------------------------------" << endl;
	Matrix<Point> a(3, 5);
	a.Rand();
	a.Print();
	cout << "------------------------------------------" << endl;
	cout << "------------------------------------------" << endl;

	cout << a << endl;
	cout << "------------------------------------------" << endl;
	Matrix<Point> sum = a + 3;
	Matrix<Point> sum2 = 3 + a;

	if (sum > sum2)
	{
		cout << "sum> sum2\n";
	}
}