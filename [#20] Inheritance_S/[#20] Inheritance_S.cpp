#include <iostream>
using namespace std;

class clsName
{
    string _FirstName;
    string _LastName;

public:

    clsName()
    {

    }

    clsName(string FirstName, string LastName)
    {
        _FirstName = FirstName;
        _LastName = LastName;
    }

    // -------------First Name-------------
    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    string GetFirstName()
    {
        return _FirstName;
    }

    __declspec(property(get = GetFirstName, put = SetFirstName))string FirstName;


    // -------------Last Name-------------
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

class clsFullName : public clsName
{
private:
    string _FullName;

public:
    string FullName()
    {
        return FirstName + " " + LastName;
    }
};

int main()
{
    clsFullName Name;

    Name.FirstName = "Mohamed";
    Name.LastName = "Ragheb";
    
    cout << "Full Name: " << Name.FullName() << endl;

    return 0;
}
