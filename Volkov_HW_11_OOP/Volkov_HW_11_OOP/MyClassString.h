#pragma once
#include <iostream>

using namespace std;

class MyString {
    char* str;
    int size;
    static int count;
public:
    MyString(); // конструктор по умолчанию
    MyString(int); // конструктор принимающий от пользователя количество символов
    MyString(const char*); // конструктор принимающий строку
    MyString(const MyString& obj);

    int My_Strlen()const; // метод strlen()

    void Print(); // метод вывода

    void Input(); // метод ввода с клавиатуры

    void MyStrCpy(MyString&); // метод strcpy() копирует строку

    bool My_Strstr(const char*);

    int My_Strchr(char); // метод ищет заданный символ в строке

    void MyDelChr(char); // удаляет заданный символ в строке

    int MyStrCmp(const MyString& b)const; // делает сравнение строк различие длинны

    void MyStrCat(const char* obj); // объединяет строки

    static int GetCount();

    ~MyString();

    MyString& operator=(const MyString& obj); // оператор присваивания

    MyString& operator=(const char* str);

    void operator()() { // оператор вывода
        cout << "Str: " << str << endl;
    }

    char& operator[](const unsigned char index); // // оператор поиска символа по индексу

    operator char* ()const; // преобразование типов char 

    operator int()const; // преобразование типов int

    int Get_Size();

    char* Get_Str();

    const char* My_Str_Pointer() const;

    int My_Chr(char c) const;


};