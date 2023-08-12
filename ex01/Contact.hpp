#include <iostream>
#include <string>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		Contact();
		Contact(std::string&, std::string&, std::string&, std::string&, std::string&);
		~Contact();
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
