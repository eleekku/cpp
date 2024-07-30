#include "phonebook_main.hpp"


void addContact(PhoneBook &phonebook, int index)
{
    std::string first_name, last_name, nickname, phone_number, darkest_secret;

    std::cout << "Please enter contact's first name\n ";
    std::getline(std::cin, first_name);
    if (std::cin.eof())
        return;

    std::cout << "Please enter contact's last name\n ";
    std::getline(std::cin, last_name);
    if (std::cin.eof())
        return;

    std::cout << "Please enter contact's nickname\n ";
    std::getline(std::cin, nickname);
    if (std::cin.eof())
        return;
   
    std::cout << "Please enter contact's phone_number\n ";
    std::getline(std::cin, phone_number);
    if (std::cin.eof())
        return;

    std::cout << "Please enter contact's darkest_secret\n ";
    std::getline(std::cin, darkest_secret);
    if (std::cin.eof())
        return;
}

int main(void)
{
        std::string user_input;
        Contact     test;
        PhoneBook   phonebook;
        int         contact_count;
 
        contact_count = 0;
        while (1)
        {
            std::cout << "Please enter a command (SEARCH / ADD / EXIT)\n";
            std::getline(std::cin, user_input);
            if (std::cin.eof())
                break;
            if (user_input == "ADD")
            {
                if (contact_count >= 8)
                    std::cout << "Cannot add more than 8 contacts\n";
                else
                {
                    addContact(phonebook, contact_count);
                    contact_count++;
                }
            }
            if (user_input == "SEARCH")
                break;
            if (user_input == "EXIT")
                break;
            else
                std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
        }
        return (0);
}