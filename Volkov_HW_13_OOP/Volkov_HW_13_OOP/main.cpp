#include <iostream>
#include <time.h>
using namespace std;

class Stack
{
	// Нижняя и верхняя границы стека
	enum { EMPTY = -1, FULL = 20 };
	// Массив для хранения данных
	char st[FULL + 1];
	// Указатель на вершину стека
	int top;

public:

	Stack();  // Конструктор
	void Push(char c);  // Добавление элемента
	char Pop();      // Извлечение элемента
	void Clear();  // Очистка стека
	bool IsEmpty();   // Проверка существования элементов в стеке
	bool IsFull();   // Проверка на переполнение стека
	int GetCount();  // Количество элементов в стеке
	char Check(); // method for checking if parentheses are entered correctly
	void Output() {
		for (int i = 0; i < top + 1; i++) {
			cout << st[i] << " ";
		}
		cout << endl;
	}
	void Print();

	char Top() {
		return st[top];
	}
	
};


Stack::Stack()
{
	top = EMPTY;  // Изначально стек пуст
}

void Stack::Clear()
{
	// Эффективная "очистка" стека 
	// (данные в массиве все еще существуют, 
	// но функции класса, ориентированные на работу с вершиной стека,
	// будут их игнорировать)
	top = EMPTY;
}

bool Stack::IsEmpty()   // Пуст?
{
	return top == EMPTY;
}

bool Stack::IsFull()  // Полон?
{
	return top == FULL;
}

int Stack::GetCount()
{
	// Количество присутствующих в стеке элементов
	return top + 1;
}

char Stack::Check() // method for checking if parentheses are entered correctly
{
	int amount = 1; // for counting
	for (int i = 0; i <= top; i++) {
		// checks if everything is correct goes to the next check
		if (st[i] == ')') {
			if (st[i - 1] == '(') {
				for (int l = i - 1; l < top; l++)
					st[l] = st[l + 1];
				Pop();
				i--;
				amount++;
			}
			else if (st[i - amount] == '(') {
				for (int l = i - amount; l < top; l++)
					st[l] = st[l + 1];
				Pop();
				i--;
				amount++;
			}
			// if not true it returns a string
			else 
				return st[i]; // return str
		}
		// in the next check, {} are checked if they are located correctly, then it goes to the next check
		else if (st[i] == '}') {
			if (st[i - 1] == '{') {
				for (int l = i - 1; l < top; l++)
					st[l] = st[l + 1];
				Pop();
				i--;
				amount++;
			}
			else if (st[i - amount] == '{') {
				for (int l = i - amount; l < top; l++)
					st[l] = st[l + 1];
				Pop();
				i--;
				amount++;
			}
			// if not correctly placed returns a string
			else 
				return st[i];
		}
		// next check checks [] if they are located correctly then it exits the loop
		else if (st[i] == ']') {
			if (st[i - 1] == '[') {
				for (int l = i - 1; l < top; l++)
					st[l] = st[l + 1];
				Pop();
				i--;
				amount++;
			}
			else if (st[i - amount] == '[') {
				for (int l = i - amount; l < top; l++)
					st[l] = st[l + 1];
				Pop();
				i--;
				amount++;
			}
			// if not true returns a string
			else 
				return st[i]; // return str
		}
	}
	// if everything is true returns true
	return true; // return true
}

void Stack::Push(char c)
{
	// Если в стеке есть место, то увеличиваем указатель
	// на вершину стека и вставляем новый элемент
	if (!IsFull())
		st[++top] = c;
}

char Stack::Pop()
{
	// Если в стеке есть элементы, то возвращаем верхний и
	// уменьшаем указатель на вершину стека
	if (!IsEmpty())
		return st[top--];
	else // Если в стеке элементов нет
		return 0;
}

void Stack::Print() {
	for (int i = 0; i <= top; i++) {
		cout << st[i];
	}
	cout << endl << endl;
}


void main()
{
	Stack a;
	char str[50];
	cout << "Enter... ";
	int amount = 0;
	while (true) {
		char c = getchar();
		if (c == ';') {
			break;
		}
		str[amount] = c;
		amount++;
	}
	str[amount] = '\0';
	cout << str << endl;
	// writes parentheses to the object that are written in a string
	for (int j = 0, h = 0; j < amount; j++) {
		if (str[j] == '}' || str[j] == '{' || str[j] == '[' || str[j] == ']' || str[j] == '(' || str[j] == ')')
			a.Push(str[j]);
	}
	if (a.Check() == true)
		cout << "Symbol true" << endl; // if the method returns true then it is
	else
		cout << "Symbol false " << a.Check() << endl; // if it returns false, it displays what exactly is not true
}

