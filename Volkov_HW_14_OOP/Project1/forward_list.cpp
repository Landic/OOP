#include <iostream>
using namespace std;


struct Element
{
	// ������
	char data;
	// ����� ���������� �������� ������
	Element* Next;
};

// ����������� ������
class List
{
	// ����� ��������� �������� ������
	Element* Head;
	// ����� ��������� �������� ������
	Element* Tail;
	// ���������� ��������� ������
	int Count;

public:
	// �����������
	List();
	// ����������
	~List();

	// ���������� �������� � ������
	// (����� ������� ���������� ���������)
	void Add(char data);

	// �������� �������� ������
	// (��������� �������� �������)
	void Del();
	// �������� ����� ������
	void DelAll();

	void Character_Insertion(char data,int number); // Adding a character to an array

	void Del(int number); // deleting a specific character

	int Symbol_Search(char data); // character search

	// ���������� ����������� ������
	// (���������� ���������� � ��������� ��������)
	void Print();

	// ��������� ���������� ���������, ����������� � ������
	int GetCount();
};

List::List()
{
	// ���������� ������ ����
	Head = Tail = NULL;
	Count = 0;
}

List::~List()
{
	// ����� ������� ��������
	DelAll();
}

int List::GetCount()
{
	// ���������� ���������� ���������
	return Count;
}

void List::Add(char data)
{
	// �������� ������ ��������
	Element* temp = new Element;

	// ���������� �������
	temp->data = data;
	// ��������� ������� �����������
	temp->Next = NULL;
	// ����� ������� ���������� ��������� ��������� ������
	// ���� �� �� ������ �����������
	if (Head != NULL) {
		Tail->Next = temp;
		Tail = temp;
	}
	// ����� ������� ���������� ������������
	// ���� �� ������ �����������
	else {
		Head = Tail = temp;
	}
}

void List::Del()
{
	// ���������� ����� ��������� ��������
	Element* temp = Head;
	// ������������� ������ �� ��������� �������
	Head = Head->Next;
	// ������� ������ �������� �������
	delete temp;
}

void List::DelAll()
{
	// ���� ��� ���� ��������
	while (Head != 0)
		// ������� �������� �� ������
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
	// ���������� ����� ��������� ��������
	Element* temp = Head;
	// ���� ��� ���� ��������
	while (temp != 0)
	{
		// ������� ������
		cout << temp->data << " ";
		// ��������� �� ��������� �������
		temp = temp->Next;
	}

	cout << "\n\n";
}

// �������� ������
void main()
{
	// ������� ������ ������ List
	List lst;

	// �������� ������
	char s[] = "Hello, World !!!\n";
	// ������� ������
	cout << s << "\n\n";
	// ���������� ����� ������
	int len = strlen(s);
	// �������� ������ � ������
	for (int i = 0; i < len; i++)
		lst.Add(s[i]);
	lst.Character_Insertion('a', 5);
	lst.Print();
	lst.Del(2);
	lst.Print();
	cout << lst.Symbol_Search('H') << endl;
}

