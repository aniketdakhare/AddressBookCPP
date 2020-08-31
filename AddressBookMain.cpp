#include <iostream>
#include "AddressBookDetails.cpp"
#include "UserInputs.cpp"

using namespace std;

void addDetails()
{
    AddressBook addressBook;
    UserInput userInput;
    string firstName = userInput.getFirstName();
    string lastName = userInput.getLastName();
    string address = userInput.getAddress();
    string city = userInput.getCity();
    string state = userInput.getState();
    int zipcode = userInput.getZipCode();
    string phoneNumber = userInput.getPhoneNumber();
    Person person(firstName, lastName, address, city, state, zipcode, phoneNumber);
    addressBook.addPersonDetails(person);
    addressBook.display();
}

int main()
{
    addDetails();
}