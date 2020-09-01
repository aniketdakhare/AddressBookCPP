#include <iostream>
#include <list>
#include "Person.cpp"
#include "UserInputs.cpp"

using namespace std;

class AddressBook
{
    private:
        void editSpecificField(Person& person);
        bool isPersonPresent(Person person);

    public:
        Person person;
        UserInput userInput;
        list<Person> addressBookList;
        
        void addPersonDetails(Person person);
        void editPersonDetails(string firstName, string lastName);
        void deletePersonDetails(string firstName, string lastName);
        void display();
};

void AddressBook :: addPersonDetails(Person person)
{
    if (isPersonPresent(person) == false)
    {
        addressBookList.push_back(person);
        return;
    }
    cout << "\nRecord already exist." << endl;   
}

bool AddressBook :: isPersonPresent(Person person)
{
    for (list<Person> :: iterator personDetails = addressBookList.begin(); personDetails != addressBookList.end(); personDetails++)
    {
        if (personDetails->firstName == person.firstName && personDetails->lastName == person.lastName)
        {
            return true;
        }
    }
    return false;
}

void AddressBook :: editPersonDetails(string firstName, string lastName)
{
    bool check = true;

    for (list<Person> :: iterator person = addressBookList.begin(); person != addressBookList.end(); person++)
    {
        if (person->firstName == firstName && person->lastName == lastName)
        {
            editSpecificField(*person);
            check = false;
            break;
        }
    }

    if (check == true)
    {
        cout << "\nRecord doesn't exist" << endl;
    }
}

void AddressBook :: editSpecificField(Person& person)
{
    bool flag = true;
    
    while (flag)
    {
        int selectField = userInput.selectFieldToEdit();
    
        switch (selectField)
        {
            case 1:
                person.address = userInput.getAddress();
                break;
            case 2:
                person.city = userInput.getCity();
                break;
            case 3:
                person.state = userInput.getState();
                break;
            case 4:
                person.zipCode = userInput.getZipCode();
                break;
            case 5:
                person.phoneNumber = userInput.getPhoneNumber();
                break;
            case 6:
                flag = false;
                break;
            default:
                cout << "\nPlease Select valid Input." << endl;
        }
    }
}

void AddressBook :: deletePersonDetails(string firstName, string lastName)
{
    bool check = true;

    for (list<Person> :: iterator person = addressBookList.begin(); person != addressBookList.end(); person++)
    {
        if (person->firstName == firstName && person->lastName == lastName)
        {
            addressBookList.erase(person);
            check = false;
            break;
        }
    }

    if (check == true)
    {
        cout << "\nRecord doesn't exist" << endl;
    }
}

void AddressBook :: display()
{
    if (addressBookList.empty())
    {
        cout << "\nNo records present" << endl;
    }
    
    for (Person person : addressBookList)
    {
        cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "NAME: " << person.firstName << " " << person.lastName << "  ADDRESS: " << person.address << "  CITY: " << person.city;
        cout << "  STATE: " << person.state << "  ZIPCODE: " << person.zipCode << "  PHONE NO.: " << person.phoneNumber << endl;   
    }
    cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
}