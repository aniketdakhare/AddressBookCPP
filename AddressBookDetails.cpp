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
        void display(list<Person> addressBookList);

    public:
        Person person;
        UserInput userInput;
        list<Person> addressBookList;
        
        void addPersonDetails(Person person);
        void editPersonDetails(string name);
        void deletePersonDetails(string name);
        void sortBy(int choise);
        void displayByCityAndState(string city, string state);
        void displayByCityOrState(string place);
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
        if (personDetails->name == person.name)
        {
            return true;
        }
    }
    return false;
}

void AddressBook :: editPersonDetails(string name)
{
    bool check = true;

    for (list<Person> :: iterator person = addressBookList.begin(); person != addressBookList.end(); person++)
    {
        if (person->name == name)
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

void AddressBook :: deletePersonDetails(string name)
{
    bool check = true;

    for (list<Person> :: iterator person = addressBookList.begin(); person != addressBookList.end(); person++)
    {
        if (person->name == name)
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

void AddressBook ::sortBy(int choise)
{
    if (addressBookList.empty())
    {
        cout << "\nNo record present" << endl;
        return;
    }

    switch (choise)
    {
        case 1:
            addressBookList.sort([](const Person &firstPerson, const Person &secondPerson) { 
                if(firstPerson.name == secondPerson.name)
                    return &firstPerson < &secondPerson;
                return firstPerson.name < secondPerson.name;});
            break;
        case 2:
            addressBookList.sort([](const Person &firstPerson, const Person &secondPerson) { 
                if(firstPerson.zipCode == secondPerson.zipCode)
                    return &firstPerson < &secondPerson;
                return firstPerson.zipCode < secondPerson.zipCode;});
            break;
        case 3:
            addressBookList.sort([](const Person &firstPerson, const Person &secondPerson) { 
                if(firstPerson.city == secondPerson.city)
                    return &firstPerson < &secondPerson;
                return firstPerson.city < secondPerson.city;});
            break;
        case 4:
            addressBookList.sort([](const Person &firstPerson, const Person &secondPerson) { 
                if(firstPerson.state == secondPerson.state)
                    return &firstPerson < &secondPerson;
                return firstPerson.state < secondPerson.state;});
            break;
        default:
            cout << "\nInvalid Input" << endl;
            break;
    }
    
    display(addressBookList);
}

void AddressBook :: displayByCityAndState(string city, string state)
{
    list<Person> addressBook;

    for (list<Person> :: iterator person = addressBookList.begin(); person != addressBookList.end(); person++)
    {
        (city != state) ? ( (person->city == city && person->state == state) ? addressBook.push_back(*person) : void() ) :
        ((city == state) ? ((person->city == city || person->state == state) ? addressBook.push_back(*person) : void()) : void());
    }

    if (addressBook.empty())
    {
        cout << "\nRecord doesn't exist" << endl;
        return;
    }
    
    display(addressBook);
}

void AddressBook ::displayByCityOrState(string place)
{
    displayByCityAndState(place, place);
}

void AddressBook :: display(list<Person> addressBookList)
{
    for (Person person : addressBookList)
    {
        cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "NAME: " << person.name << "  ADDRESS: " << person.address << "  CITY: " << person.city;
        cout << "  STATE: " << person.state << "  ZIPCODE: " << person.zipCode << "  PHONE NO.: " << person.phoneNumber << endl;   
    }
    cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
}