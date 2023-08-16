#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cstring>
#include <string>

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
		void			printContact() const;
		std::string&	getFirstName();
		std::string&	getLastName();
		std::string&	getNickName();
		std::string&	getPhoneNumber();
		std::string&	getDarkestSecret();
		void			setFirstName(std::string& s);
		void			setLastName(std::string& s);
		void			setNickName(std::string& s);
		void			setPhoneNumber(std::string& s);
		void			setDarkestSecret(std::string& s);
};

#endif