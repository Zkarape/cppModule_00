#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(const std::string& f, const std::string& l, const std::string& n, const std::string& p, const std::string& d)
                :_firstName(f), _lastName(l), _nickName(n), _phoneNumber(p), _darkestSecret(d)
{}

void    Contact::printContact() const
{
    std::cout << "First name : " << _firstName << std::endl;
    std::cout << "Last name : " << _lastName << std::endl;
    std::cout << "Nickname : " << _nickName << std::endl;
    std::cout << "Phone number : " << _phoneNumber << std::endl;
    std::cout << "Darkest secret : " << _darkestSecret << std::endl;
}

Contact::~Contact() {}