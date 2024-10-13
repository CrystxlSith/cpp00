#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "Welcome To Your Personnal PhoneBook" << std::endl;
    return;
}

PhoneBook::~PhoneBook()
{
    std::cout << "See You Soon !!" << std::endl;
    return;
}

void PhoneBook::addContact(const Contact &contact)
{
    if (_index < 9)
    {
        _contacts[_index] = contact;
        _index++;
        std::cout << "Contact Added" << std::endl;
    }
    return;
}