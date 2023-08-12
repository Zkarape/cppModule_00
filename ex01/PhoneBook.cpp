#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    int i;

    i = -1;
    while (++i < 8)
        contacts[i] = Contact();
}

void PhoneBook::addContact()
{
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    std::cout << "Input first name for contact";
    std::cin >> firstName;
    std::cout << "Input last name for contact";
    std::cin >> lastName;
    std::cout << "Input nickname for contact";
    std::cin >> nickname;
    std::cout << "Input phone number for contact";
    std::cin >> phoneNumber;
    std::cout << "Input darkest secret for contact";
    std::cin >> darkestSecret;

    if (firstName.empty())
        std::cout << "I said input first name for contact";
    if (lastName.empty())
        std::cout << "I said input last name for contact";
    if (nickname.empty())
        std::cout << "I said input nickname for contact";
    if (phoneNumber.empty())
        std::cout << "I said input phone number for contact";
    if (darkestSecret.empty())
        std::cout << "I said input darkest secret for contact";

    
}

PhoneBook::~PhoneBook()
{

}