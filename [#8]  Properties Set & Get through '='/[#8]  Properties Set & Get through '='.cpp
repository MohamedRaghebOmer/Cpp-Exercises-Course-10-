#include <iostream>
using namespace std;

class clsPerson
{
private:
    string _FirstName;
    string _LastName;

public:
    // Property set first name
    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    // Property get last name
    string GetFirstName()
    {
        return _FirstName;
    }

    __declspec(property(get = GetFirstName, put = SetFirstName))string FirstName;

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    string GetLastName()
    {
        return _LastName;
    }

    __declspec(property(get = GetLastName, put = SetLastName))string LastName;
};

int main()
{
    clsPerson Person1;

    Person1.SetFirstName("Mohamed");
    cout << "Get first name from property GetFirstName: "
        << Person1.GetFirstName() << endl;

    Person1.FirstName = "Mohamed";
    cout << "Get first name from declspec: " << Person1.FirstName << endl;

    Person1.SetLastName("Ragheb");
    cout << "\n\nGet last name from property GetLastName: "
        << Person1.GetLastName() << endl;

    Person1.LastName = "Ragheb";
    cout << "Get last name from declspec: " << Person1.LastName << endl;

    return 0;
}