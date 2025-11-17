#include <iostream>
#include <string>
using namespace std;

// This is a Abstract Class
class clsMobile
{
public:
    virtual void Dial(string PhoneNumber) = 0; // pure virtual method
    virtual void SendSMS(string PhoneNumber, string Text) = 0; // pure virtual method
    virtual float Sum(float Num1, float Num2) = 0; // pure virtual method
    virtual string Notpad() = 0; // pure virtual method
    virtual bool IsPositiveNum(float Num) = 0; // pure virtual method
    virtual char ToCapitalLetter(char Letter) = 0; // pure virtual method
};

class clsIphone : public clsMobile
{
public:
    void Dial(string PhoneNumber) override
    {
        cout << "Phone is ringing!. (Dialed) :-)" << endl;
    }

    void SendSMS(string PhoneNumber, string Text) override
    {
        cout << "Message sent successfuly! :-)" << endl;
    }

    float Sum(float Num1, float Num2) override
    {
        return Num1 + Num2;
    }

    string Notpad() override
    {
        return "Text In note bad";
    }

    bool IsPositiveNum(float Num) override
    {
        return Num > 0;
    }

    char ToCapitalLetter(char Letter) override
    {
        return toupper(Letter);
    }

    void MyOwnFunc()
    {
        cout << "This is my own function! :-|" << endl;
    }
};

class clsSumsung : public clsIphone
{
public:
    void SumsungFunction()
    {
        cout << "This is sumsung function" << endl;
        clsIphone::MyOwnFunc();
    }

};

int main()
{
    clsIphone Iphone1;

    Iphone1.Dial("028934");
    
    if (Iphone1.IsPositiveNum(-1))
    {
        cout << "Yes, this is a positive num" << endl;
    }
    else
    {
        cout << "No, this a nigative num" << endl;
    }

    clsSumsung Sumsung;

    Sumsung.SumsungFunction();

    return 0;
}