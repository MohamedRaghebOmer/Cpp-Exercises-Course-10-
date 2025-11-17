#include <iostream>
using namespace std;

class clsA
{
private:
    int _Var1;
    void Func1()
    {
        cout << "I am Function 1 From A" << endl;
    }

protected:
    int Var2;
    void Func2()
    {
        cout << "I am Function2" << endl;
    }

public:
    int Var3;
    void Func3()
    {
        cout << "I am Function3" << endl;
    }
};

class clsB : public clsA
{
public:
    void Func11()
    {
        cout << "I am function 11" << endl;
        clsA::Func2();
    }

    void Func12()
    {
        cout << "I am function 12" << endl;
        clsA::Func3();
        Func2(); // If You have a lot of classes you Will make a mistaks so Type:   clsA::func2();
    }
};

int main()
{
    clsB B;

    B.Func11();
    B.Func12();

    return 0;
}
