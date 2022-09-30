#include <conio.h>
#include <iostream>
#include <fstream>
#include <Windows.h>

#include "Functions.h"

using namespace std;

void Insert(Tree& tree)
{
    system("cls");
    cout << "Enter a quantity of elements to add: ";

    unsigned int count = 0U;
    cin >> count;

    for (unsigned int i = 0U; i < count; ++i)
    {
        Node* temp = new Node;

        cout << endl << "Enter an english word " << i + 1 << endl;
        cin >> temp->GetEnglish();

        cout << endl << "Enter a russian word " << i + 1 << endl;
        cin >> temp->GetRussian();

        tree.Insert(temp);
    }
}

void Print(const Tree& tree)
{
    system("cls");

    tree.Print(tree.GetRoot());

    _getch();
}

void PrintMenu()
{
    char menu[] = "1. Insert node\n2. Remove node\n3. Print node\n4. Search node\n5. Edit for Russian translate\n6. Save file\n7. Exit\n";

    system("cls");

    cout << menu;
}
void Edit_Russian_Translate(Tree& tree) {
    system("cls"); // clear console
    cout << "Enter a word to look it up in an English dictionary:" << endl;
    cout << "Enter... ";
    char str[15]; // buffer
    cin >> str;
    Node* node = tree.Search(tree.GetRoot(), str); // The search method is called from the root and our buffer is passed there
    cout << "Enter new translate:" << endl;
    cout << "Enter... ";
    cin >> node->m_russian; // the Russian label is called and a new translation is being entered
    cout << "Press any key for exit" << endl;
    _getch();
}

void Save_File(const Tree& tree) {
    system("cls"); // clear console
    FILE* out;
    fopen_s(&out, "Save_Data.txt", "w");
    if (out == nullptr) // if the file is nullptr then an error is displayed
        cout << "Error" << endl;
    else { // if not, then saving is in progress, the method in the tree class is called
        tree.Save_File(tree.GetRoot(), out);
        fclose(out);
    }
    for (int i = 0; i < 2; i++) // A little beauty in the console :)
    {
        cout << "Save." << endl;
        Sleep(500);
        system("cls");
        cout << "Save.." << endl;
        Sleep(500);
        system("cls");
        cout << "Save..." << endl;
        Sleep(500);
        system("cls");
    }
}

void Remove(Tree& tree)
{
    system("cls");
    cout << "Enter an english word to remove:" << endl;

    char buffer[15] = {};
    cin >> buffer;

    Node* node = tree.Search(tree.GetRoot(), buffer);

    tree.Remove(node);
}

void Search(const Tree& tree)
{
    system("cls");
    cout << "Enter an english word to search:" << endl;

    char buffer[15] = {};
    cin >> buffer;

    Node* node = tree.Search(tree.GetRoot(), buffer);

    if (node != nullptr)
    {
        cout << node->GetRussian();
    }
    else
    {
        cout << "Word not found" << endl;
    }

    _getch();
}