#include "PhoneBook.hpp"

int main()
{
	PhoneBook	phonebook = PhoneBook();
	std::string s;

	std::cout << "Enter one of three commands:  ADD, SEARCH and EXIT" << std::endl;
	std::cin >> s;
	if (s.compare("ADD") == 0)
	{
		phonebook.addContact();
	}
	else if (s.compare("SEARCH") == 0)
	{
		phonebook.searchContact();
	}
	// if (strcmp(s, "SEARCH") == 0)
	// {
	// 	//SEARCH
	// }
	// if (strcmp(s, "EXIT") == 0)
	// {
	// 	//EXIT
	// }
	// else
	// {
	// 	//error
	// }
}
