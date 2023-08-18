#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook = PhoneBook();
	std::string s;

	while (1)
	{
		std::cout << "\nEnter one of three commands:  ADD, SEARCH and EXIT" << std::endl;
		std::cin >> s;
		if (s.compare("ADD") == 0)
		{
			phonebook.addContact();
		}
		else if (s.compare("SEARCH") == 0)
		{
			phonebook.searchContact();
		}
		else if (s.compare("EXIT") == 0)
		{
			exit(0);
		}
	}
}
