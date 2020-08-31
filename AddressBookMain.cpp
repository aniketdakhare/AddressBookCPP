#include <iostream>
#include "Person.cpp"

using namespace std;

int main()
{
    Person person("Aniket", "Dakhare", "Dhanori", "Pune", "Maharashtra", 443445, "9988997856");
    cout << "NAME: " << person.firstName << " " << person.lastName << "  ADDRESS: " << person.address << "  CITY: " << person.city;
    cout << "  STATE: " << person.state << "  ZIPCODE: " << person.zipCode << "  PHONE NO.: " << person.phoneNumber << endl;
}