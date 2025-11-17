#include <iostream>
using namespace std;

class clsA
{
public:
    virtual void Print() // This is the lesson topic (virual)
    {
        cout << "Hi, I am class A" << endl;
    }
};

class clsB : public clsA
{
public:
    void Print()
    {
        cout << "Hi, I am class B" << endl;
    }
};

class clsC : public clsB
{
public:
    void Print()
    {
        cout << "Hi, I am class C" << endl;
    }
};

int main()
{
    clsA A;
    clsB B;
    clsC C;

    /*A.Print();
    B.Print();
    C.Print();*/

    clsA * PointerA = &B;
    clsB* PointerB = &C;
    clsA* PointerA2 = &C;

    PointerA->Print();
    PointerB->Print();
    PointerA2->Print();

    return 0;
}