#include <iostream>
#include "clsPerson.h";
using namespace std;

int main()
{
    clsPerson Person1("Mohamed", "Ragheb");

    cout << "First Name: " << Person1.GetFirstName() << endl;
    cout << "Last Name: " << Person1.LastNameD << endl;
    cout << "Full Name: " << Person1.FullName() << endl;
   
    system("pause>0");
    return 0;
}