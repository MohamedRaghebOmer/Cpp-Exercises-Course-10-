#pragma once

#include <iostream>
using namespace std;

class clsTestClass
{
	string _Message = "Hello, I am the base class!";

public:

	void PrintMessage()
	{
		cout << _Message << endl;
	}

};

