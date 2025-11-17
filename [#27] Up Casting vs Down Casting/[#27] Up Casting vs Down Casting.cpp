#include <iostream>
using namespace std;

class clsA
{
private:
    int _Var1;
    void FuncA1()
    {
        cout << "I am Function 1 From A" << endl;
    }

protected:
    int Var2;
    void FuncA2()
    {
        cout << "I am Function2" << endl;
    }

public:
    int Var3;
    void FuncA3()
    {
        cout << "I am Function3" << endl;
    }
};

class clsB : public clsA
{
public:
    void FuncB1()
    {
        clsA::FuncA2();
    }
};

int main()
{
    clsB B;
    clsA A;

    clsA* PointerA = &B;
    clsA* PointerA2 = &A;
//  clsB* PointerB = &A;    (error) because this is a down casting!

    return 0;
}