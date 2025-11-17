#include <iostream>
using namespace std;

class clsPerson
{
private:
    string _FirstName = "Mohamed";
    string _LastName = "Ragheb";

public:
    string SetFirstName(string FirstName)
    {
        return _FirstName = FirstName;
    }

    string FirstName()
    {
        return _FirstName;
    }

    string SetLastName(string LastName)
    {
        return _LastName = LastName;
    }

    string LastName()
    {
        return _LastName;
    }

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }
};

int main()
{
    clsPerson Person1;

    Person1.SetFirstName("Mazen");
    Person1.SetLastName("Omer");
    
    cout << "First Name: " << Person1.FirstName() << endl;
    cout << "Last Name: " << Person1.LastName() << endl;
    cout << "Full Name: " << Person1.FullName() << endl;

    return 0;
}