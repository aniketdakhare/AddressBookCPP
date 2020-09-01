#include "AddressBookDetails.cpp"

using namespace std;

void presentChoice()
{
    AddressBook addressBook;
    UserInput userInput;
    
    while (true)
    {
        switch (userInput.selectChoiceToPerformOperation())
        {
            case 1:
                {
                    Person person;
                    string firstName = userInput.getFirstName();
                    string lastName = userInput.getLastName();
                    person.name = (firstName + " " + lastName);
                    person.address = userInput.getAddress();
                    person.city = userInput.getCity();
                    person.state = userInput.getState();
                    person.zipCode = userInput.getZipCode();
                    person.phoneNumber = userInput.getPhoneNumber();
                    addressBook.addPersonDetails(person);
                }
                break;
            case 2:
                {
                    string firstName = userInput.getFirstName();
                    string lastName = userInput.getLastName();
                    string name = (firstName + " " + lastName);
                    addressBook.editPersonDetails(name);
                }
                break;
            case 3:
                {
                    string firstName = userInput.getFirstName();
                    string lastName = userInput.getLastName();
                    string name = (firstName + " " + lastName);
                    addressBook.deletePersonDetails(name);
                }
                break;
            case 4:
                addressBook.sortBy(userInput.selectFieldToSort());
                break;
            case 5:
                {
                    string city = userInput.getCity();
                    string state = userInput.getState();
                    addressBook.displayByCityAndState(city, state);
                }
                break;
            case 6:
                {
                    string place = userInput.getCityOrStateName();
                    addressBook.displayByCityOrState(place);
                }
                break;
            case 7:
                exit(0);
        }
    }
}

int main()
{
    presentChoice();
}