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
    static int k = -1;
    int flag = 0;

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
        flag = 1;
    else if (lastName.empty())
        flag = 1;
    else if (nickname.empty())
        flag = 1;
    else if (phoneNumber.empty())
        flag = 1;
    else if (darkestSecret.empty())
        flag = 1;
    if (flag == 1)
    {
        std::cout << "Some inputs are empty for contact";
        return;
    }
    k++;
    if (k == 8)
        k = 0;
    this->contacts[k] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
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

void getIndex(Contact cont[8])
{
    std::stringstream   ss;
    int                 idx;
    std::string         index;

    idx = -1;
    std::cout << "\nInput index of the contact to display\n";
    std::cin >> index;
    ss << index;
    ss >> idx;
    if (idx >= 0 && idx <= 8 && ss.fail() == false)
        cont[idx].printContact();
    else
        std::cout << "Something is wrong with index\n";
}

void PhoneBook::searchContact()
{
    std::cout << std::right << std::setw(10) << "index"
              << "|"
              << std::right << std::setw(10) << "first name"
              << "|"
              << std::right << std::setw(10) << "last name "
              << "|"
              << std::right << std::setw(10) << "nickname" << std::endl;
    getIndex(this->contacts);
}

PhoneBook::~PhoneBook() {}