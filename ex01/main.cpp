#include "PhoneBook.hpp"

void    create_contact(PhoneBook &phonebook)
{
    Contact contact;
    std::string input;

    std::cout << "Enter Last Name" << std::endl;
    std::getline(std::cin, input);
    contact.setLname(input);

    std::cout << "Enter First Name" << std::endl;
    std::getline(std::cin, input);
    contact.setRname(input);
    
    std::cout << "Enter Phone Number" << std::endl;
    std::getline(std::cin, input);
    contact.setPhonenb(input);

    std::cout << "Enter Nickname" << std::endl;
    std::getline(std::cin, input);
    contact.setNickname(input);

    std::cout << "Enter Your Darkest Secret..." << std::endl;
    std::getline(std::cin, input);
    contact.setSecret(input);

    phonebook.addContact(contact);
}

void    welcome_message()
{
    // std::cout << "Welcome To Your Personnal PhoneBook" << std::endl;
    std::cout << "Please choose an option:" << std::endl;
    std::cout << "PRESS ADD  OR  SEARCH  OR  EXIT" << std::endl;
}

int main()
{
    PhoneBook phonebook;
    std::string input;

    while (true)
    {
        welcome_message();
        std::getline(std::cin, input);
        if (input == "ADD")
            create_contact(phonebook);
        else if (input == "SEARCH")
            phonebook.printContact();
        else if (input == "EXIT")
            break ;
    }
    return 0;
}
