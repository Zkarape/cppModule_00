#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(const std::string& f, const std::string& l, const std::string& n, const std::string& p, const std::string& d)
                :_firstName(f), _lastName(l), _nickName(n), _phoneNumber(p), _darkestSecret(d)
{}

void    Contact::printContact() const
{
    std::cout << "First name : " << firstName << std::endl;
    std::cout << "Last name : " << lastName << std::endl;
    std::cout << "Nickname : " << nickname << std::endl;
    std::cout << "Phone number : " << phoneNumber << std::endl;
    std::cout << "Darkest secret : " << darkestSecret << std::endl;
}

Contact::~Contact() {}