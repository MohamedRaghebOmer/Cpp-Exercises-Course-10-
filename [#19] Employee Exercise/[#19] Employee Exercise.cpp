#include <iostream>
#include <string>
using namespace std;

class clsEmployee
{
    short _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _PhoneNumber;
    int _Salary;
    string _Department;

public:
    clsEmployee(short ID, string FirstName, string LastName, string Title,
        string Email, string PhoneNumber, int Salary, string Department)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Title = Title;
        _Email = Email;
        _PhoneNumber = PhoneNumber;
        _Salary = Salary;
        _Department = Department;
    }

    // Read-only property
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

    __declspec(property(get = GetLastName, put = SetLastName)) string LastName;

    // -------Full Name------
    string FullName()
    {
        return _FirstName + " " + _LastName;
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

    void SendEmail(string Subject, string TextMessage)
    {
        cout << "\nThe following message sent successfully to email \""
            << _Email << "\":" << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << TextMessage << endl;
    }

    void SendSMS(string TextMessage)
    {
        cout << "\nThe following message sent successfully to phone \""
            << _PhoneNumber << "\":" << endl;
        cout << "Body: " << TextMessage << endl;
    }

    void Print()
    {
        cout << "\t\t\tInfo:" << endl;
        cout << "\n--------------------------------------------------" << endl;
        cout << "ID          : " << _ID << endl;
        cout << "First Name  : " << _FirstName << endl;
        cout << "Last Name   : " << _LastName << endl;
        cout << "Title       : " << _Title << endl;
        cout << "Email       : " << _Email << endl;
        cout << "Phone Number: " << _PhoneNumber << endl;
        cout << "Salary      : " << _Salary << endl;
        cout << "Department  : " << _Department << endl;
        cout << "\n--------------------------------------------------" << endl;
    }
};

void RunTheCode()
{
    // 1) Create the object using the constructor
    clsEmployee Employee(123, "Mohamed", "Ragheb", "Developer",
        "mohamedraghebomer@gmail.com", "01002608684", 5000, "Engineering");

    // 2) Print the initial state
    cout << "=== Initial state ===\n";
    Employee.Print();

    // 3) Read the ID (read-only)
    cout << "\nRead-only ID(): " << Employee.ID() << endl;

    // 4) Use the property to read and write FirstName and LastName
    cout << "\nFirstName (property get): " << Employee.FirstName << endl;
    cout << "LastName  (property get): " << Employee.LastName << endl;

    // 5) Change the names using property and setter
    Employee.FirstName = "Mohamed-Ahmed";   // uses SetFirstName
    Employee.LastName = "Ragheb-Omar";      // uses SetLastName

    // 6) Use FullName()
    cout << "\nFullName(): " << Employee.FullName() << endl;

    // 7) Change the Title in different ways (property and method)
    Employee.Title = "Senior Developer";    // via property
    Employee.SetTitle("Team Lead");         // via setter (overwrites to "Team Lead")

    // 8) Change email and phone number (property)
    Employee.Email = "new.email@example.com";
    Employee.PhoneNumber = "01234567890";

    // 9) Change the salary and department (property)
    Employee.Salary = 7500;                 // uses SetSalary
    Employee.Department = "R&D";            // uses SetDepartment

    // 10) Print the state after updates
    cout << "\n=== After updates ===\n";
    Employee.Print();

    // 11) Use the send methods to see the messages
    Employee.SendEmail("Monthly Report", "Please find the monthly report attached.");
    Employee.SendSMS("Reminder: Meeting at 3 PM.");

    // 12) Use separate getters for printing (you can use them instead of the property)
    cout << "\nGetters examples:" << endl;
    cout << "FirstName (GetFirstName): " << Employee.GetFirstName() << endl;
    cout << "LastName  (GetLastName) : " << Employee.GetLastName() << endl;
    cout << "Title     (GetTitle)    : " << Employee.GetTitle() << endl;
    cout << "Email     (GetEmail)    : " << Employee.GetEmail() << endl;
    cout << "Phone     (GetPhoneNumber): " << Employee.GetPhoneNumber() << endl;
    cout << "Salary    (GetSalary)   : " << Employee.GetSalary() << endl;
    cout << "Department(GetDepartment): " << Employee.GetDepartment() << endl;
}

int main()
{
    RunTheCode();

    system("pause>0");
    return 0;
}
