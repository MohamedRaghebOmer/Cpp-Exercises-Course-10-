#include <iostream>
using namespace std;

class clsName
{
    string _FirstName;
    string _LastName;

public:

    clsName(string FirstName, string LastName)
    {
        _FirstName = FirstName;
        _LastName = LastName;
    }

    string FirstName()
    {
        return _FirstName;
    }

    string LastName()
    {
        return _LastName;
    }

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }

    static void PrintHelloMessage()
    {
        cout << "This's a test for static functions!" << endl;
    }
};

int main()
{
    // Recall static method without object                  (NOT error)
    clsName::PrintHelloMessage();  
    
    //This's an error because this is Not a static method     (Error)
    clsName::FirstName();

    clsName Name("Mohamed", "Ragheb");

    cout << "\nGet first name using object : " << Name.FirstName() << endl;
    cout << "Get last name using object : " << Name.LastName() << endl;
    cout << "Get full name using object : " << Name.FullName() << endl;

    return 0;
}