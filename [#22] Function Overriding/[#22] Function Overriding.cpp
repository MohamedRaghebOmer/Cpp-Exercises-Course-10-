#include <iostream>
using namespace std;

class clsPerson
{
    short _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _PhoneNumber;

public:
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

    __declspec(property(get = GetFirstName, put = SetFirstName))string FirstName;


    // -------Last Name------
    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    string GetLastName()
    {
        return _LastName;
    }

    __declspec(property(get = GetLastName, put = SetFirstName))string LastName;


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

    __declspec(property(get = GetEmail, put = SetEmail))string Email;


    // -------Phone Number------
    void SetPhoneNumber(string PhoneNumber)
    {
        _PhoneNumber = PhoneNumber;
    }

    string GetPhoneNumber()
    {
        return _PhoneNumber;
    }

    __declspec(property(get = GetPhoneNumber, put = SetPhoneNumber))string PhoneNumber;


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
        cout << "\nThe following message sent successfully to email \""
            << _PhoneNumber << "\":" << endl;
        cout << "Body: " << TextMessage << endl;
    }
};

class clsEmployee : public clsPerson
{
private:
    string _Title;
    string _Department;
    float _Salary;

public:

    clsEmployee(short ID, string FirstName, string LastName, string Email,
        string PhoneNumber, string Title, string Department, float Salary) :
        clsPerson(ID, FirstName, LastName, Email, PhoneNumber)
    {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;
    }

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
    void SetSalary(float Salary)
    {
        _Salary = Salary;
    }

    float GetSalary()
    {
        return _Salary;
    }

    __declspec(property(get = GetSalary, put = SetSalary)) float Salary;


    void Print()
    {
        cout << "\t\t\tInfo:" << endl;
        cout << "\n--------------------------------------------------" << endl;
        cout << "ID          : " << ID() << endl;
        cout << "First Name  : " << FirstName << endl;
        cout << "Last Name   : " << LastName << endl;
        cout << "Email       : " << Email << endl;
        cout << "Phone Number: " << PhoneNumber << endl;
        cout << "Title     : " << _Title << endl;
        cout << "Department: " << _Department << endl;
        cout << "Salary    : " << _Salary << endl;
        cout << "\n--------------------------------------------------" << endl;
    }

};

int main()
{
    clsEmployee Employee(123, "Mohamed", "Ragheb", "mohamedraghebomer@gmail.com",
        "01002608684", "Developer", "A100", 5000);
    Employee.Print();

    return 0;
}