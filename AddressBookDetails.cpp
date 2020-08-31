#include <iostream>
#include "Person.cpp"
#include "UserInputs.cpp"

using namespace std;

class AddressBook
{
    public:
        Person person;
        
        void addPersonDetails(Person person);
        void editPersonDetails();
        void deletePersonDetails();
        void display();
};

void AddressBook :: addPersonDetails(Person person)
{
    this->person = person;
}

void AddressBook :: editPersonDetails()
{
    UserInput userInput;
    person.address = userInput.getAddress();
    person.city = userInput.getCity();
    person.state = userInput.getState();
    person.zipCode = userInput.getZipCode();
    person.phoneNumber = userInput.getPhoneNumber();
}

void AddressBook :: deletePersonDetails()
{
    person.~Person();
}

void AddressBook :: display()
{
    cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "NAME: " << person.firstName << " " << person.lastName << "  ADDRESS: " << person.address << "  CITY: " << person.city;
    cout << "  STATE: " << person.state << "  ZIPCODE: " << person.zipCode << "  PHONE NO.: " << person.phoneNumber << endl;
}