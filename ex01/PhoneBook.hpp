#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	private:
	/*
		TODO : index des contcts && tableau [8] contacts
	*/
		int	_index;
		Contact _contacts[8];
	public:
	/*
		TODO : ADD, SEARCH, EXIT
	*/
	PhoneBook();
	~PhoneBook();
	void addContact(const Contact &contact);
};



#endif