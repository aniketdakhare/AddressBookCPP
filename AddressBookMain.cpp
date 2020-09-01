#include "AddressBookDetails.cpp"

using namespace std;

void presentChoice()
{
    AddressBook addressBook;
    UserInput userInput;
    
    while (true)
    {
        int choice;
        cout << "\n\nSelect & enter the task you want to do: \n1: Add details \n2: Edit Person Details \n3: Delete Person Details";
        cout << "\n4: Display details. \n5: Exit" << endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
                {
                    Person person;
                    person.firstName = userInput.getFirstName();
                    person.lastName = userInput.getLastName();
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
                    addressBook.editPersonDetails(firstName, lastName);
                }
                break;
            case 3:
                {
                    string firstName = userInput.getFirstName();
                    string lastName = userInput.getLastName();
                    addressBook.deletePersonDetails(firstName, lastName);
                }
                break;
            case 4:
                addressBook.display();
                break;
            case 5:
                exit(0);
        }
    }
}

int main()
{
    presentChoice();
}