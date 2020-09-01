#include <iostream>

using namespace std;

class  UserInput
{
    public:
        string getFirstName();
        string getLastName();
        string getAddress();
        string getCity();
        string getState();
        string getZipCode();
        string getPhoneNumber();
        string getCityOrStateName();
        int selectFieldToEdit();
        int selectFieldToSort();
        int selectChoiceToPerformOperation();
};

string UserInput::getFirstName()
{
    string firstName;
    cout << "Enter your First Name:  ";
    cin >> firstName;
    return firstName;
}

string UserInput::getLastName()
{
    string lastName;
    cout << "Enter your Last Name:  ";
    cin >> lastName;
    return lastName;
}

string UserInput::getAddress()
{
    string address;
    cout << "Enter your Address:  ";
    cin >> address;
    return address;
}

string UserInput::getCity()
{
    string city;
    cout << "Enter your City:  ";
    cin >> city;
    return city;
}

string UserInput::getState()
{
    string state;
    cout << "Enter your State:  ";
    cin >> state;
    return state;
}

string UserInput::getPhoneNumber()
{
    string phoneNumber;
    cout << "Enter your Phone Number:  ";
    cin >> phoneNumber;
    return phoneNumber;
}

string UserInput::getZipCode()
{
    string zipCode;
    cout << "Enter your Zipcode:  ";
    cin >> zipCode;
    return zipCode;
}

int UserInput :: selectFieldToEdit()
{
    int choice;
    cout << "Select field to edit details. \n1: Address \n2: City";
    cout << "\n3: State \n4: Zipcode \n5: Phone Number \n6: Save and Exit" << endl;
    cin >> choice;
    return choice;
}

int UserInput :: selectFieldToSort()
{
    int choice;
    cout << "Select the type of sorting you want to do. \n1: Sort by name";
    cout << "\n2: Sort by ZipCode \n3: Sort by City \n4: Sort by State" << endl;
    cin >> choice;
    return choice;
}

string UserInput :: getCityOrStateName()
{
    string place;
    cout << "Enter your City or State name:  ";
    cin >> place;
    return place;
}

int UserInput :: selectChoiceToPerformOperation()
{
    int choice;
    cout << "\n\nSelect & enter the task you want to do: \n1: Add details \n2: Edit Person Details \n3: Delete Person Details \n4: Display address book ";
    cout << "details sorted by name, city, zipcode or state. \n5: Display address book details by state and city name.";
    cout << "\n6: Display address book details by state or city name. \n7: Exit" << endl;
    cin >> choice;
    return choice;
}