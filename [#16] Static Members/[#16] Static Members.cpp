#include <iostream>
#include <string>
using namespace std;

class clsA
{
public:
    int var;
    static int Counter;

    clsA()
    {
        Counter++;
    }

    void Print()
    {
        cout << "var     = " << var << endl;
        cout << "counter = " << Counter << endl << endl;
    }
};

// static variable initialization outside the class
int clsA::Counter = 0;

int main()
{
    clsA A1, A2, A3;

    A1.var = 10;
    A2.var = 20;
    A3.var = 30;

    A1.Print();
    A2.Print();
    A3.Print();

    A1.Counter = 500;

    cout << "\nAfter changing the static member counter in one object:\n";

    A1.Print();
    A2.Print();
    A3.Print();

    return 0;
}
