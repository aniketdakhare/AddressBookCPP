#include <iostream>

using namespace std;

class Person
{
    public:
        string firstName;
        string lastName;
        string address;
        string city;
        string state;
        int zipCode;
        string phoneNumber;

        Person(string firstName, string lastName, string address, string city, string state, int zipCode, string phoneNumber)
        {
            this->firstName=firstName;
            this->lastName=lastName;
            this->address=address;
            this->city=city;
            this->state=state;
            this->zipCode=zipCode;
            this->phoneNumber=phoneNumber;
        }
};