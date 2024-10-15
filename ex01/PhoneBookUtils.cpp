# include "PhoneBook.hpp"

void    PhoneBook::verif_index()
{
    int i = 0;
    std::string input;

    std::getline(std::cin, input);
    if (input[1])
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    i = atoi(input.c_str());
    if (i <= _index && i > 0)
    {
        displayContact(_contacts[i - 1]);
    }
    else
    {
        std::cout << "Invalid index" << std::endl;
    }
}
