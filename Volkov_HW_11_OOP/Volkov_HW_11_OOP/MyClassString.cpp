#include "MyClassString.h"
#include <iostream>

using namespace std;

int MyString::count = 0;

int MyString::GetCount() { // статический метод который считает количество объектов
    return count;
}

MyString::~MyString()
{
    delete[] str;
    size = 0;
}

MyString& MyString::operator=(const MyString& obj) // оператор присваивания
{
    if (this == &obj)
        return *this;
    delete[]str;
    size = obj.size;
    str = new char[size + 1];
    for (int i = 0; i < size; i++)
        str[i] = obj.str[i];
    str[size] = '\0';

    return *this;
}

MyString& MyString::operator=(const char* str)
{
    size = strlen(str);
    delete[]this->str;
    this->str = new char[size + 1];
    for (int i = 0; i < size + 1; i++)
        this->str[i] = str[i];
    this->str[size] = '\0';
    return *this;
}

char& MyString::operator[](const unsigned char index) // оператор поиска символа по индексу
{
    return str[index]; // возвращает символ
}

MyString::operator char* () const // преобразование типов char 
{
    return str;
}

MyString::operator int() const // преобразование типов int
{
    return size;
}

int MyString::Get_Size()
{
    return size;
}

char* MyString::Get_Str()
{
    return str;
}

const char* MyString::My_Str_Pointer() const
{
    return str;
}

MyString::MyString() { // конструктор по умолчанию
    str = new char[80];
    str[0] = '\0';
    size = 0;
    count++;
}



MyString::MyString(int size) { // конструктор по умолчанию но размер строки пользователь
    this->size = size;
    str = new char[size + 1];
    str[0] = '\0';
    count++;
}



MyString::MyString(const char* str) { // конструктор принимающий строку
    size = strlen(str);
    this->str = new char[size + 1];
    for (int i = 0; i < size; i++)
        this->str[i] = str[i];
    this->str[size] = '\0';
    count++;
}

MyString::MyString(const MyString& obj) // Copy
{
    str = new char[strlen(obj.str) + 1];
    strcpy_s(str, strlen(obj.str) + 1, obj.str);

    size = obj.size;

}


int MyString::My_Strlen() const { // считает количество символов в строке
    int amount = 0;
    // в переменную amount записывает количество символов в строке
    while (this->str[amount] != '\0') {
        amount++;
    }
    return amount; // возвращает переменную 
}



bool MyString::My_Strstr(const char* str) { //метод поиска подстроки в строке
    int i = 0, j = 0;
    int nTemp = i;
    int nStrLen = strlen(this->str);
    int nStrSubLen = strlen(str);
    for (i = 0; i < nStrLen - nStrSubLen; i++)
    {
        nTemp = i;
        for (j = 0; j < nStrSubLen; j++)
        {
            if (this->str[nTemp] == str[j])
            {
                if (j == nStrSubLen - 1)
                    return 1;
                nTemp++;
            }
            else
                break;
        }
    }
    return 0;
}



int MyString::My_Strchr(char c) { // Этот метод ищет символ и возвращает индекс
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == c) {
            return i; // возвращение индекса
        }
        else {
            i++;
        }
    }
    return -1; // возвращает -1 если не найденно 
}



int MyString::MyStrCmp(const MyString& b)const {   // делает сравнение строк различие длинны
    int i = 0;
    int flag = 0; // эта переменная для записи если первая строка больше записывается 1 если другая больше записывается -1 если одинаковые 0
    while (flag == 0)
    {
        if (str[i] > b.str[i]) // сравнивает строки
        {
            flag = 1;
        }
        else if (str[i] < b.str[i])
        {
            flag = -1;
        }
        if (str[i] == '\0')
        {
            break;
        }
        i++;
    }
    return flag; // возвращает результат какая строка больше или меньше
}

void MyString::MyStrCat(const char* obj) // объеденяет строки
{
    char* temp = new char[size + strlen(obj) + 1];
    for (int i = 0; i < size; i++)
    {
        temp[i] = str[i];
    }
    for (int i = 0; i < strlen(obj); i++)
    {
        temp[i + size] = obj[i];
    }
    size += strlen(obj);
    temp[size] = '\0';
    delete[] str;
    str = temp;
}

int MyString::My_Chr(char c) const
{
    for (int i = 0; i < size; i++)
    {
        if (str[i] == c)
            return i;
    }
    return -1;
}


void MyString::MyDelChr(char c) { // удаляет символ из строки
    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        if (str[i] != c)
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
}



void MyString::Print() { // вывод
    cout << "Str = " << str;
}



void MyString::Input() { // ввод с клавиатуры
    cout << endl << "Enter text... ";
    cin.getline(str, size);
}

void MyString::MyStrCpy(MyString& b) // strcpy() копирует строку
{
    while ((*str++ = *b.str++) != '\0' && size--);
}