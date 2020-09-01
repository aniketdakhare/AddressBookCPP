#include "AddressBookDetails.cpp"

using namespace std;

void presentChoice()
{
    AddressBook addressBook;
    UserInput userInput;
    
    while (true)
    {
        int choice;
        cout << "\n\nSelect & enter the task you want to do: \n1: Add details \n2: Edit Person Details \n3: Delete Person Details \n4: Display address book ";
        cout << "details sorted by name, city, zipcode or state. \n5: Display address book details by state and city name. \n6: Exit" << endl;
        cin >> choice;

        switch (choice)
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
                exit(0);
        }
    }
}

int main()
{
    presentChoice();
}