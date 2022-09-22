#pragma once
#include <iostream>

using namespace std;

class MyString {
    char* str;
    int size;
    static int count;
public:
    MyString(); // ����������� �� ���������
    MyString(int); // ����������� ����������� �� ������������ ���������� ��������
    MyString(const char*); // ����������� ����������� ������
    MyString(const MyString& obj);

    int My_Strlen()const; // ����� strlen()

    void Print(); // ����� ������

    void Input(); // ����� ����� � ����������

    void MyStrCpy(MyString&); // ����� strcpy() �������� ������

    bool My_Strstr(const char*);

    int My_Strchr(char); // ����� ���� �������� ������ � ������

    void MyDelChr(char); // ������� �������� ������ � ������

    int MyStrCmp(const MyString& b)const; // ������ ��������� ����� �������� ������

    void MyStrCat(const char* obj); // ���������� ������

    static int GetCount();

    ~MyString();

    MyString& operator=(const MyString& obj); // �������� ������������

    MyString& operator=(const char* str);

    void operator()() { // �������� ������
        cout << "Str: " << str << endl;
    }

    char& operator[](const unsigned char index); // // �������� ������ ������� �� �������

    operator char* ()const; // �������������� ����� char 

    operator int()const; // �������������� ����� int

    int Get_Size();

    char* Get_Str();

    const char* My_Str_Pointer() const;

    int My_Chr(char c) const;


};