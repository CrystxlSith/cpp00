#include "PhoneBook.hpp"
#include <cstring>

PhoneBook::PhoneBook()
{
   _index = 0;
   _oldest = 0;
    return;
}

PhoneBook::~PhoneBook()
{
    std::cout << "See You Soon !!" << std::endl;
    return;
}

void    PhoneBook::printContact(void)
{
    int i = 1;
    // int j = 0;
    std::string str;

    std::cout << " ___________________________________________" << std::endl;
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;  
    while (i <= _index)
    {
        std::cout << "|-------------------------------------------|" << std::endl;
        std::cout << "|";
        while (i <= _index)
        {
            std::cout << "         " << i << "|";
            std::cout << "         " << _contacts[i].getRname() << "|";
            str = _contacts[i].getLname();
            if (str.length() > 10)
            {
                str.resize(9);
                str.append(".");
            }
            // std::cout << "         " << _contacts[i].getLname() << "|";
            // std::cout << "         " << _contacts[i].getNickname() << "|";
            std::cout << std::endl;
            i++;
        }
        
    }
    
}

void PhoneBook::addContact(const Contact &contact)
{
    if (_index < 8)
    {
        _contacts[_index] = contact;
        _index++;
        std::cout << "index = " << _index << std::endl;
        std::cout << "Contact Added" << std::endl;
    }
    else if (_index > 7)
    {
        _contacts[_oldest] = contact;
        if (_oldest == 7)
            _oldest = 0;
        _oldest++;
    }
    return;
}