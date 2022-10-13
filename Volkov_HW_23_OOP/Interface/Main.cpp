#include"Animal.h"
using namespace std;

int main()
{
	IAnimal* ptr = nullptr;
	ptr = new Parrot("Ara", 2, "Africa");
	// ptr - интерфейсная ссылка
	ptr->Eat();
	ptr->Move();
	Parrot* p = static_cast<Parrot*>(ptr);
	p->Print();
	IFly* ifly = p;
	ifly->Fly();
	delete ptr;
	cout << "---------------------------" << endl;
	ptr = new Human();
	ptr->Eat();
	ptr->Move();
	delete ptr;
	cout << "--------------------------" << endl;
	ptr = new Cat("Britain",2,"Europa");
	ptr->Eat();
	ptr->Move();
	Cat* ptr1 = static_cast<Cat*>(ptr);
	ptr1->Print();
	delete ptr;
	cout << "--------------------------" << endl;
	ptr = new Dolphi("Fish", 2, "Sea");
	ptr->Eat();
	ptr->Move();
	Dolphi* ptr2 = static_cast<Dolphi*>(ptr);
	ptr2->Print();
	ISwim* ISwim1 = ptr2;
	ISwim1->Swim();
	delete ptr;
	cout << "--------------------------" << endl;
	ptr = new Dog("Buldog", 2, "Europa");
	ptr->Eat();
	ptr->Move();
	Dog* ptr3 = static_cast<Dog*>(ptr);
	ptr3->Print();
	delete ptr;
	cout << "--------------------------" << endl;
	ptr = new Pinguin("Bird", 2, "Antarctida");
	ptr->Eat();
	ptr->Move();
	Pinguin* ptr4 = static_cast<Pinguin*>(ptr);
	ptr4->Print();
	ISwim* ISwim2 = ptr4;
	ISwim2->Swim();
	delete ptr;
		
}