#pragma once

#include "clsTestClass.h"
#include <iostream>
using namespace std;

class clsTestTheBaseClass :
    public clsTestClass
{
    clsTestClass BaseClass;

public:
    void PrintMessageFromBaseClass()
    {
        BaseClass.PrintMessage();
    }
    
};

