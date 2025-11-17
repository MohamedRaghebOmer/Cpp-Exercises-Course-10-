#include <iostream>
#include <string>
using namespace std;

class clsPerson
{
    short _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _PhoneNumber;

public:

    clsPerson()
    {

    }

    clsPerson(short ID, string FirstName, string LastName, string Email,
        string PhoneNumber)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _PhoneNumber = PhoneNumber;
    }

    // Read only property
    short ID()
    {
        return _ID;
    }


    // -------First Name------
    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    string GetFirstName()
    {
        return _FirstName;
    }

    __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;


    // -------Last Name------
    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    string GetLastName()
    {
        return _LastName;
    }

    // fixed: put should be SetLastName
    __declspec(property(get = GetLastName, put = SetLastName)) string LastName;


    // -------Full Name------
    string FullName()
    {
        return _FirstName + " " + _LastName;
    }


    // -------Email------
    void SetEmail(string Email)
    {
        _Email = Email;
    }

    string GetEmail()
    {
        return _Email;
    }

    __declspec(property(get = GetEmail, put = SetEmail)) string Email;


    // -------Phone Number------
    void SetPhoneNumber(string PhoneNumber)
    {
        _PhoneNumber = PhoneNumber;
    }

    string GetPhoneNumber()
    {
        return _PhoneNumber;
    }

    __declspec(property(get = GetPhoneNumber, put = SetPhoneNumber)) string PhoneNumber;


    void Print()
    {
        cout << "\t\t\tInfo:" << endl;
        cout << "\n--------------------------------------------------" << endl;
        cout << "ID          : " << _ID << endl;
        cout << "First Name  : " << _FirstName << endl;
        cout << "Last Name   : " << _LastName << endl;
        cout << "Email       : " << _Email << endl;
        cout << "Phone Number: " << _PhoneNumber << endl;
        cout << "\n--------------------------------------------------" << endl;
    }

    void SendEmail(string Subject, string TextMessage)
    {
        cout << "\nThe following message sent successfully to email \""
            << _Email << "\":" << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << TextMessage << endl;
    }

    void SendSMS(string TextMessage)
    {
        // fixed message text to refer to phone number
        cout << "\nThe following message sent successfully to phone number \""
            << _PhoneNumber << "\":" << endl;
        cout << "Body: " << TextMessage << endl;
    }
};

class clsEmployee : public clsPerson
{
private:
    string _Title;
    string _Department;
    int _Salary;

public:

    // -------Title------
    void SetTitle(string Title)
    {
        _Title = Title;
    }

    string GetTitle()
    {
        return _Title;
    }

    __declspec(property(get = GetTitle, put = SetTitle)) string Title;


    // -------Department------
    void SetDepartment(string Department)
    {
        _Department = Department;
    }

    string GetDepartment()
    {
        return _Department;
    }

    __declspec(property(get = GetDepartment, put = SetDepartment)) string Department;


    // -------Salary------
    void SetSalary(int Salary)
    {
        _Salary = Salary;
    }

    int GetSalary()
    {
        return _Salary;
    }

    __declspec(property(get = GetSalary, put = SetSalary)) int Salary;

};


int main()
{
    clsEmployee Employee1;

    Employee1.SetFirstName("Mohammed");
    Employee1.SetLastName("Abu-Hadhoud");
    Employee1.SetEmail("a@a.com");

    Employee1.Print();

    Employee1.SendEmail("Hi", "How are you?");

    Employee1.SetSalary(5000);

    cout << "Salary is: " << Employee1.GetSalary();

    // Calling the print will not print anything from derived class, only base class
    // Therefore the print method will not serve me here, this is a problem will be solved in the next lecture.
    Employee1.Print();

    return 0;
}
