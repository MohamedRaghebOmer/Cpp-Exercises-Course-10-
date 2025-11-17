/*
So:-

(Data member): is any variable declared inside the class that holds data.

(Member function): is any function or procedure declared inside the class.

*/

#include <iostream>
using namespace std;

class clsPerson
{
private:
    short Age = 17; // This's a data member
    string eMail = "mohamedraghebomer@gmail.com"; // This is a data member

public:
    string FirstName = "Mohamed"; // This is a data member because it holds a data
    string LastName = "Ragheb"; // This is a data member because it holds a data

    string FullName() // This's a method Or Member function
    {
        return FirstName + " " + LastName;
    }

private:
    string Adrees = "El-Tawfia kafer Saad Damyta";
    string StreetName = "Mr-Ragheb";
    string PhoneNumber = "01001451925";
};

int main()
{
    clsPerson Person1; // This's an object declaration.  Person1 --> Object

    cout << Person1.FullName() << endl;

    return 0;
}