#include <iostream>
using namespace std;

class clsPerson
{
private:
    short Age = 17; // This's a normal string.
    string eMail = "mohamedraghebomer@gmail.com";

public:
    string FirstName = "Mohamed";
    string LastName = "Ragheb";

    string FullName() // This's a method.
    {
        return FirstName + " " + LastName;
    }

private:
    string Adrees = "El-Tawfia kafer Saad Damytta";
    string StreetName = "Mr-Ragheb";
    string PhoneNumber = "01001451925";
};

int main()
{
    clsPerson Person1; // This's an object declaration.

    cout << Person1.FullName() << endl;
    
    return 0;
}