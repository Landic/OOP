#include <iostream>
using namespace std;


struct Element
{
	// Данные
	char data;
	// Адрес следующего элемента списка
	Element* Next;
};

// Односвязный список
class List
{
	// Адрес головного элемента списка
	Element* Head;
	// Адрес головного элемента списка
	Element* Tail;
	// Количество элементов списка
	int Count;

public:
	// Конструктор
	List();
	// Деструктор
	~List();

	// Добавление элемента в список
	// (Новый элемент становится последним)
	void Add(char data);

	// Удаление элемента списка
	// (Удаляется головной элемент)
	void Del();
	// Удаление всего списка
	void DelAll();

	void Character_Insertion(char data,int number); // Adding a character to an array

	void Del(int number); // deleting a specific character

	int Symbol_Search(char data); // character search

	// Распечатка содержимого списка
	// (Распечатка начинается с головного элемента)
	void Print();

	// Получение количества элементов, находящихся в списке
	int GetCount();
};

List::List()
{
	// Изначально список пуст
	Head = Tail = NULL;
	Count = 0;
}

List::~List()
{
	// Вызов функции удаления
	DelAll();
}

int List::GetCount()
{
	// Возвращаем количество элементов
	return Count;
}

void List::Add(char data)
{
	// создание нового элемента
	Element* temp = new Element;

	// заполнение данными
	temp->data = data;
	// следующий элемент отсутствует
	temp->Next = NULL;
	// новый элемент становится последним элементом списка
	// если он не первый добавленный
	if (Head != NULL) {
		Tail->Next = temp;
		Tail = temp;
	}
	// новый элемент становится единственным
	// если он первый добавленный
	else {
		Head = Tail = temp;
	}
}

void List::Del()
{
	// запоминаем адрес головного элемента
	Element* temp = Head;
	// перебрасываем голову на следующий элемент
	Head = Head->Next;
	// удаляем бывший головной элемент
	delete temp;
}

void List::DelAll()
{
	// Пока еще есть элементы
	while (Head != 0)
		// Удаляем элементы по одному
		Del();
}

void List::Character_Insertion(char data, int number) // Adding a character to an array
{
	if (number <= 0 && !(this->Head)) {
		Add(data); 
		Count++; 
		return;
	}
	Element* temp = this->Head;
	for (int i = 1; i < number && temp->Next; ++i) {
		temp = temp->Next;
	}
	Element* temp1 = new Element;
	temp1->data = data;
	temp1->Next = temp->Next;
	temp->Next = temp1;
	Count++;
}

void List::Del(int number) // deleting a specific character
{
	int i = 0;
	Element* temp = Head;
	while (temp != 0)
	{
		temp = temp->Next;
		i++;
	}
	delete[] temp;
	if (number == 1) {
		Del();
	}
	else {
		int amount = 1;
		Element* temp3 = Head;
		while (amount < number - 1) {
			temp3 = temp3->Next;
			amount++;
		}
		amount = 1;
		Element* temp2 = Head;
		while (amount < number) {
			temp3 = temp3->Next;
			amount++;
		}
		temp2->Next = temp3->Next;
		delete[] temp3;
	}
}

int List::Symbol_Search(char data) // character search
{
	int amount = 0;
	Element* temp = Head;
	while (temp != 0) {
		temp = temp->Next;
		amount++;
	}
	int i = 0, position = 1;
	Element* temp1 = Head;
	while (i <= amount) {
		if (temp1->data == data)
			return position;
		temp1 = temp1->Next;
		position++;
		i++;
	}
	return NULL;
}

void List::Print()
{
	// запоминаем адрес головного элемента
	Element* temp = Head;
	// Пока еще есть элементы
	while (temp != 0)
	{
		// Выводим данные
		cout << temp->data << " ";
		// Переходим на следующий элемент
		temp = temp->Next;
	}

	cout << "\n\n";
}

// Тестовый пример
void main()
{
	// Создаем объект класса List
	List lst;

	// Тестовая строка
	char s[] = "Hello, World !!!\n";
	// Выводим строку
	cout << s << "\n\n";
	// Определяем длину строки
	int len = strlen(s);
	// Загоняем строку в список
	for (int i = 0; i < len; i++)
		lst.Add(s[i]);
	lst.Character_Insertion('a', 5);
	lst.Print();
	lst.Del(2);
	lst.Print();
	cout << lst.Symbol_Search('H') << endl;
}

