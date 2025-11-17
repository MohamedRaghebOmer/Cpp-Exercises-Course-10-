#pragma once

#include <iostream>
using namespace std;

class clsPerson
{
    string FirstName;
    string LastName;

public:
    clsPerson(string FirstName, string LastName)
    {
        this->FirstName = FirstName;
        this->LastName = LastName;
    }

    void SetFirstName(string FirstName)
    {
        this->FirstName = FirstName;
    }

    string GetFirstName()
    {
        return this->FirstName;
    }

    __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstNameD;

    void SetLastName(string LastName)
    {
        this->LastName = LastName;
    }

    string GetLastName()
    {
        return this->LastName;
    }

    __declspec(property(get = GetLastName, put = SetFirstName)) string LastNameD;

    string FullName()
    {
        return this->FirstName + " " + this->LastName;
    }
};


