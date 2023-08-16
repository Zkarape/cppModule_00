#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <sstream>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	public:
		Contact();
		Contact(const std::string&, const std::string&, const std::string&, const std::string&, const std::string&);
		~Contact();
		void	printContact() const;
};

#endif