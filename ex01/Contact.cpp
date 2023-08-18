#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(const std::string &f, const std::string &l, const std::string &n, const std::string &p, const std::string &d)
    : _firstName(f), _lastName(l), _nickname(n), _phoneNumber(p), _darkestSecret(d)
{}

void Contact::setIndex(std::string &s)
{
    _index = s;
}

void printColumn(std::string &str)
{
    if (str.length() <= 10)
        std::cout << std::right << std::setw(10) << str;
    else
    {
        str = str.substr(0, 9) + ".";
        std::cout << std::right << std::setw(10) << str;
    }
}

void Contact::printContact()
{
    std::cout << std::right << std::setw(10) << "index"
              << "|"
              << std::right << std::setw(10) << "first name"
              << "|"
              << std::right << std::setw(10) << "last name"
              << "|"
              << std::right << std::setw(10) << "nickname"
              << "|"
              << std::right << std::setw(10) << "phone number"
              << "|"
              << std::right << std::setw(10) << "darkest secret" << std::endl;
    printColumn(_index);
    printColumn(_firstName);
    printColumn(_lastName);
    printColumn(_nickname);
    printColumn(_phoneNumber);
    printColumn(_darkestSecret);
}

Contact::~Contact() {}