#include <iostream>
using namespace std;

class clsPerson
{
    class clsAddress
    {
        string _AddressLine1;
        string _AddressLine2;
        string _City;
        string _Country;

    public:

        clsAddress(string AddressLine1, string AddressLine2,
            string City, string Country)
        {
            _AddressLine1 = AddressLine1;
            _AddressLine2 = AddressLine2;
            _City = City;
            _Country = Country;
        }

        void Print() 
        { 
            cout << "\n------------Address------------\n";
            cout << "Address Line 1: " << _AddressLine1 << endl;
            cout << "Address Line 2: " << _AddressLine2 << endl;
            cout << "City          : " << _City << endl;
            cout << "Country       : " << _Country << endl;
        }
    };

    string _FullName;

public:
    clsAddress Address = clsAddress("", "", "", "");

    clsPerson(string FullName, string AddressLine1, string AddressLine2,
        string City, string Country)
    { 
        _FullName = FullName;
        Address = clsAddress(AddressLine1, AddressLine2, City, Country);
    }
};


int main()
{
    clsPerson Person1("Mohammed Ragheb",
        "Building 10", "Queen Rania Street", "Amman", "Jordan");
    
    Person1.Address.Print();

    return 0;
}