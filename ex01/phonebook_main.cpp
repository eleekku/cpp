#include "phonebook_main.hpp"

int addContact(PhoneBook &phonebook, int index)
{
    std::string first_name, last_name, nickname, phone_number, darkest_secret;

    std::cout << "Please enter contact's first name\n ";
    std::getline(std::cin, first_name);
    if (std::cin.eof())
        return (0);

    std::cout << "Please enter contact's last name\n ";
    std::getline(std::cin, last_name);
    if (std::cin.eof())
        return (0);

    std::cout << "Please enter contact's nickname\n ";
    std::getline(std::cin, nickname);
    if (std::cin.eof())
        return (0);
   
    std::cout << "Please enter contact's phone_number\n ";
    std::getline(std::cin, phone_number);
    if (std::cin.eof())
        return (0);

    std::cout << "Please enter contact's darkest_secret\n ";
    std::getline(std::cin, darkest_secret);
    if (std::cin.eof())
        return (0);

    phonebook.create_new_contact(index, first_name, last_name, nickname, phone_number, darkest_secret);
    return (1);
}

void    searchContact(PhoneBook &phonebook, int count) //, int index)
{
    std::string first_name, last_name, nickname;
    std::string user_index;
    int         index;

    std::cout << std::endl;
    std::cout << std::setw(10) << "Index" << "|" 
    << std::setw(10) << "First Name" << "|" 
    << std::setw(10) << "Last Name" << "|" 
    << std::setw(10) << "Nickname" << "|" << std::endl;

    for (int i = 0; i < count; ++i){
        first_name = phonebook.get_first_name(i);
        last_name = phonebook.get_last_name(i);
        nickname = phonebook.get_nickname(i);

        if (first_name.length() > 10)
            first_name = first_name.substr(0, 9) + ".";
        if (last_name.length() > 10)
            last_name = last_name.substr(0, 9) + ".";
        if (nickname.length() > 10)
            nickname = nickname.substr(0, 9) + ".";

        std::cout << std::setw(10) << i + 1 << "|" 
        << std::setw(10) << first_name << "|" 
        << std::setw(10) << last_name << "|" 
        << std::setw(10) << nickname << "|" << std::endl;
    }
    
        std::cout << std::endl;
        std::cout << "Please enter the contact's index to see more details:\n> ";
        std::getline(std::cin, user_index);
        if (std::cin.eof())
            return;
        index = std::stoi(user_index);
        if (index >= 1 && index <= count)
        phonebook.get_contact(index - 1).ft_print();
        else
            std::cout << "Wrong index\n> ";
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
                    if (addContact(phonebook, contact_count))
                    contact_count++;
                }
                continue;
            }
            if (user_input == "SEARCH")
                searchContact(phonebook, contact_count);
            if (user_input == "EXIT")
                break;
            else
                std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
        }
        return (0);
}