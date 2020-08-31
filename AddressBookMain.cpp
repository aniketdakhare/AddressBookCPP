#include "AddressBookDetails.cpp"

using namespace std;

void presentChoice()
{
    AddressBook addressBook;
    UserInput userInput;
    
    while (true)
    {
        int choice;
        cout << "\nSelect & enter the task you want to do: \n1: Add details \n2: Edit Person Details \n3: Delete Person Details";
        cout << "\n4: Display details. \n5: Exit" << endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
                {
                    string firstName = userInput.getFirstName();
                    string lastName = userInput.getLastName();
                    string address = userInput.getAddress();
                    string city = userInput.getCity();
                    string state = userInput.getState();
                    string zipcode = userInput.getZipCode();
                    string phoneNumber = userInput.getPhoneNumber();
                    Person person(firstName, lastName, address, city, state, zipcode, phoneNumber);
                    addressBook.addPersonDetails(person);
                }
                break;
            case 2:
                addressBook.editPersonDetails();
                break;
            case 3:
                addressBook.deletePersonDetails();
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