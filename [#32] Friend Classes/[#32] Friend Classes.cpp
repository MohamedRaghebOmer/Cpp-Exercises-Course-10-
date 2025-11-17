#include <iostream>
using namespace std;

class clsA
{
private:
    int _Var1 = 10;
    int _Var2 = 20;
    int _Var3 = 30;

public:

    void clsA_Function()
    {
        cout << "Hi, I am cls A" << endl;
    }

    friend class clsB;
    friend float Sum(clsA A);
};

class clsB
{
public:
    void Print(clsA A)
    {
        cout << "_Var1 = " << A._Var1 << endl;
        cout << "\nHi, I am class B" << endl;
        cout << "\n_Var2 = " << A._Var2 << endl;
    }
};

float Sum(clsA A)
{
    return A._Var1 + A._Var2 + A._Var3;
}

int main()
{
    clsA A;
   
    cout << "\nSum = " << Sum(A) << endl;

    system("pause>0");
    return 0;
}