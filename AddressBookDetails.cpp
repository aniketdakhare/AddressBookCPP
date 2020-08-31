#include <iostream>
#include "Person.cpp"

using namespace std;

class AddressBook
{
    public:
        Person person;
        
        void addPersonDetails(Person person);
        void display();
};

void AddressBook :: addPersonDetails(Person person)
{
    this->person = person;
}

void AddressBook :: display()
{
    cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "NAME: " << person.firstName << " " << person.lastName << "  ADDRESS: " << person.address << "  CITY: " << person.city;
    cout << "  STATE: " << person.state << "  ZIPCODE: " << person.zipCode << "  PHONE NO.: " << person.phoneNumber << endl;
}