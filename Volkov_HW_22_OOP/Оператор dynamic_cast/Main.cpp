#include <iostream>

#include "A.h"
#include "B.h"
#include "C.h"
#include "D.h"

using namespace std;

A* Generator()
{
    A* object = nullptr;

    int choice = rand() % 4;

    switch (choice)
    {
        case 0:
            object = new A;
            break;
        case 1:
            object = new B;
            break;
        case 2:
            object = new C;
            break;
        case 3:
            object = new D;
            break;
    }

    return object;
}

int main()
{
    const int size = 10;
    A* obj1[size] = {};
    B* obj2 = nullptr;
    C* obj3 = nullptr;
    D* obj4 = nullptr;
    int amount_A = 0U;
    int amount_B = 0U;
    int amount_C = 0U;
    int amount_D = 0U;
    for (int i = 0U; i < size; ++i)
    {
        obj1[i] = Generator();

        obj4 = dynamic_cast<D*>(obj1[i]);
      
        if (obj4 != nullptr)
        {
            ++amount_D;
        }
        else
        {
            obj3 = dynamic_cast<C*>(obj1[i]);
            if (obj3 != nullptr)
            {
                ++amount_C;
            }
            else
            {
                obj2 = dynamic_cast<B*>(obj1[i]);

                if (obj2 != nullptr)
                {
                    ++amount_B;
                }
                else
                {
                    ++amount_A;
                }
            }
        }
        obj1[i]->Show();
    }
    cout << "A: " << amount_A << endl;
    cout << "B: " << amount_B << endl;
    cout << "C: " << amount_C << endl;
    cout << "D: " << amount_D << endl;
}