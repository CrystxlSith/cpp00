#include "PhoneBook.hpp"

void    welcome_message()
{
    std::cout << "Please enter a command" << std::endl;
}

int main()
{
    PhoneBook phonebook;
    std::string input;

    while (true)
    {
        welcome_message();
        std::getline(std::cin, input);
        if (std::cin.eof() || std::cin.fail())
        {
            std::cout << "End of input detected. Exiting..." << std::endl;
            break;
        }
        if (input == "ADD")
            phonebook.create_contact(phonebook);
        else if (input == "SEARCH")
            phonebook.printContact();
        else if (input == "EXIT")
            break ;
    }
    return 0;
}
