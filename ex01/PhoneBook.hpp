#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#define SIZE 2

class PhoneBook
{
	public:
    	Contact _contacts[SIZE];
		PhoneBook();
		~PhoneBook();
		void	addContact();
		void	searchContact();
};

#endif