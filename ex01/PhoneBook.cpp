#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    int i;

    i = -1;
    while (++i < SIZE)
        _contacts[i] = Contact();
}

bool    strIsDigit(std::string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]))
            return (false);
    }
    return (true);
}

void PhoneBook::addContact()
{
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
    static int  k = -1;
    int         flag = 0;

    std::cout << "Input first name for contact: ";
    std::cin >> firstName;
    std::cout << "Input last name for contact: ";
    std::cin >> lastName;
    std::cout << "Input nickname for contact: ";
    std::cin >> nickname;
    std::cout << "Input phone number for contact: ";
    std::cin >> phoneNumber;
    std::cout << "Input darkest secret for contact: ";
    std::cin >> darkestSecret;

    if (firstName.empty())
        flag = 1;
    else if (lastName.empty())
        flag = 1;
    else if (nickname.empty())
        flag = 1;
    else if (phoneNumber.empty() || !strIsDigit(phoneNumber))
        flag = 1;
    else if (darkestSecret.empty())
        flag = 1;
    if (flag == 1)
    {
        std::cout << "Some inputs are empty or phone number does not contain only digits for contact";
        return;
    }
    k++;
    if (k == 2)
        k = 0;
    _contacts[k] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
}

void PhoneBook::searchContact()
{
    std::stringstream   ss;
    int                 idx;
    std::string         index;

    idx = 0;
    std::cout << "Input index of the contact to display: ";
    std::cin >> index;
    ss << index;
    ss >> idx;
    _contacts[idx].setIndex(index);
    if (idx >= 0 && idx <= 8 && ss.fail() == false)
        _contacts[idx].printContact();
    else
        std::cout << "Something is wrong with index\n";
}

PhoneBook::~PhoneBook() {}