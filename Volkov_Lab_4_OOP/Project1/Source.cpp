#include <iostream>
#include <string.h>
#include <time.h>
#include <windows.h>
using namespace std;

class Queue
{
	// �������
	int* Wait;
	// ������������ ������ �������
	int MaxQueueLength;
	// ������� ������ �������
	int QueueLength;

public:
	// �����������
	Queue(int m);

	//����������
	~Queue();

	// ���������� ��������
	void Add(int c);

	void Extract();

	// ������� �������
	void Clear();

	// �������� ������������� ��������� � �������
	bool IsEmpty();

	// �������� �� ������������ �������
	bool IsFull();

	// ���������� ��������� � �������
	int GetCount();

	int Get_First_Index();

	//������������ �������
	void Show();
};

void Queue::Show() {
	cout << "\n-------------------------------------\n";
	//������������ �������
	for (int i = 0; i < QueueLength; i++) {
		cout << Wait[i] << " ";
	}
	cout << "\n-------------------------------------\n";
}

Queue::~Queue()
{
	//�������� �������
	delete[]Wait;
}

Queue::Queue(int m)
{
	//�������� ������
	MaxQueueLength = m;
	//������� �������
	Wait = new int[MaxQueueLength];
	// ���������� ������� �����
	QueueLength = 0;
}

void Queue::Clear()
{
	// ����������� "�������" ������� 
	QueueLength = 0;
}

bool Queue::IsEmpty()
{
	// ����?
	return QueueLength == 0;
}

bool Queue::IsFull()
{
	// �����?
	return QueueLength == MaxQueueLength;
}

int Queue::GetCount()
{
	// ���������� �������������� � ����� ���������
	return QueueLength;
}

int Queue::Get_First_Index()
{
	return Wait[0];
}

void Queue::Add(int c)
{
	// ���� � ������� ���� ��������� �����, �� ����������� ����������
	// �������� � ��������� ����� �������
	if (!IsFull())
		Wait[QueueLength++] = c;
}


void Queue::Extract()
{
	// ���� � ������� ���� ��������, �� ���������� ���, 
	// ������� ����� ������ � �������� �������	
	if (!IsEmpty())
	{
		//��������� ������
		int temp = Wait[0];

		//�������� ��� ��������
		for (int i = 1; i < QueueLength; i++)
			Wait[i - 1] = Wait[i];

		Wait[QueueLength - 1] = temp;
	}

}




void main()
{
	srand(time(0));
	int balance;
	short choose;
	Queue q1(5), q2(5), q3(5);
	cout << "Enter your balance: " << endl;
	cout << "Enter... ";
	cin >> balance;
	system("cls");
	while (true) {
		cout << "Your balance: " << balance << endl;
		cout << "If you want to spin the drum, scroll costs 100, press Enter" << endl;
		cin.clear();
		cin.ignore(1024, '\n');
		while (cin.get() != '\n');
		balance -= 100;
		system("cls");
		for (int i = 0; i < 5; i++)
		{
			q1.Add(i + 1);
			q2.Add(i + 1);
			q3.Add(i + 1);
		}
		for (int i = 0; i < rand() % 10; i++)
		{
			q1.Extract();
		}
		for (int i = 0; i < rand() % 10; i++)
		{
			q2.Extract();
		}
		for (int i = 0; i < rand() % 10; i++)
		{
			q3.Extract();
		}
		q1.Show();
		q2.Show();
		q3.Show();
		if (q1.Get_First_Index() == 1 && q2.Get_First_Index() == 1 && q3.Get_First_Index() == 1) {
			cout << "You win $100" << endl;
			balance += 100;
		}
		else if (q1.Get_First_Index() == 2 && q2.Get_First_Index() == 2 && q3.Get_First_Index() == 2) {
			cout << "You win $200" << endl;
			balance += 200;
		}
		else if (q1.Get_First_Index() == 3 && q2.Get_First_Index() == 3 && q3.Get_First_Index() == 3) {
			cout << "You win $400" << endl;
			balance += 400;
		}
		else if (q1.Get_First_Index() == 4 && q2.Get_First_Index() == 4 && q3.Get_First_Index() == 4) {
			cout << "You win $500" << endl;
			balance += 500;
		}
		else if (q1.Get_First_Index() == 5 && q2.Get_First_Index() == 5 && q3.Get_First_Index() == 5) {
			cout << "You win $1000" << endl;
			balance += 1000;
		}
		Sleep(3000);
		system("cls");
		if (balance == 0) {
			cout << "You lose all money!" << endl;
			break;
		}
		cout << "1.Play again" <<  endl << "2.Exit" << endl;
		cin >> choose;
		if (choose == 1);
		else if (choose == 2) {
			break;
		}
		system("cls");
	}
}


