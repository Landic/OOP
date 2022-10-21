#include<iostream>
#include "MyInterface.h"
using namespace std;

class Animal // ðåàëèçàöèÿ èíòåðôåñà
{
protected:
	string name;
	double kg;
	string continent;
public:
	Animal() = default;
	Animal(string n, double k, string cont)
	{
		name = n;
		kg = k;
		continent = cont;
	}
	virtual void Print()
	{
		cout << "Name: " << name << endl;
		cout << "KG: " << kg << endl;
		cout << "Continent: " << continent << endl;
	}
	//virtual void Eat() = 0;
	//virtual void Move() = 0;	
};

class Elephant : public Animal // íàñëåäîâàíèå 
{
public:
	Elephant() = default;
	Elephant(string n, double k, string cont) :Animal(n, k, cont) {}

	// ----- ðåàëèçàöèÿ ÈÍÒÅÐÔÅÉÑÀ IANIMAL !!!

	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "KG: " << kg << endl;
		cout << "Continent: " << continent << endl;
	}
	//virtual void Move()
	//{
	//	cout << "Elephant Move\n";
	//}

};
class Parrot : public Animal // íàñëåäîâàíèå 
{
public:
	Parrot() = default;
	Parrot(string n, double k, string cont) :Animal(n, k, cont) {}

	// ----- ðåàëèçàöèÿ ÈÍÒÅÐÔÅÉÑÀ IANIMAL !!!

	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "KG: " << kg << endl;
		cout << "Continent: " << continent << endl;
	}

};


class Human :public IAnimal
{
public:
	virtual void Eat()
	{
		cout << "Human Eat\n";
	}
	virtual void Move()
	{
		cout << "Human Move\n";
	}
};


class Cat : public Animal {
public:
	Cat() = default;
	Cat(string n, double k, string cont) :Animal(n, k, cont) {}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "KG: " << kg << endl;
		cout << "Continent: " << continent << endl;
	}
};

class Dog :public Animal {
public:
	Dog() = default;
	Dog(string n, double k, string cont) :Animal(n, k, cont) {}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "KG: " << kg << endl;
		cout << "Continent: " << continent << endl;
	}
};

class Pinguin :public Animal{
public:
	Pinguin() = default;
	Pinguin(string n, double k, string cont) :Animal(n, k, cont) {}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "KG: " << kg << endl;
		cout << "Continent: " << continent << endl;
	}
};

class Dolphi :public Animal {
public:
	Dolphi() = default;
	Dolphi(string n, double k, string cont) :Animal(n, k, cont) {}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "KG: " << kg << endl;
		cout << "Continent: " << continent << endl;
	}
};
