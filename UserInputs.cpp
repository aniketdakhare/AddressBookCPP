#include <iostream>

using namespace std;

class  UserInput
{
    public:
        string getFirstName();
        string getLastName();
        string getAddress();
        string getCity();
        string getState();
        int getZipCode();
        string getPhoneNumber();
};

string UserInput::getFirstName()
{
    string firstName;
    cout << "Enter your First Name:  ";
    cin >> firstName;
    return firstName;
}

string UserInput::getLastName()
{
    string lastName;
    cout << "Enter your Last Name:  ";
    cin >> lastName;
    return lastName;
}

string UserInput::getAddress()
{
    string address;
    cout << "Enter your Address:  ";
    cin >> address;
    return address;
}

string UserInput::getCity()
{
    string city;
    cout << "Enter your City:  ";
    cin >> city;
    return city;
}

string UserInput::getState()
{
    string state;
    cout << "Enter your State:  ";
    cin >> state;
    return state;
}

string UserInput::getPhoneNumber()
{
    string phoneNumber;
    cout << "Enter your Phone Number:  ";
    cin >> phoneNumber;
    return phoneNumber;
}

int UserInput::getZipCode()
{
    int zipCode;
    cout << "Enter your Phone Zipcode:  ";
    cin >> zipCode;
    return zipCode;
}