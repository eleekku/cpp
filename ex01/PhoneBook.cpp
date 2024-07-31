#include "phonebook_main.hpp"


PhoneBook::PhoneBook(){

}

PhoneBook::~PhoneBook(){

}

Contact PhoneBook::get_contact(int i)
{
        return (phonebook[i]);
}

std::string PhoneBook::get_first_name(int i){
        return (phonebook[i].get_first_name());
}

std::string PhoneBook::get_last_name(int i)
{
        return (phonebook[i].get_last_name());
}

std::string PhoneBook::get_nickname(int i)
{
        return (phonebook[i].get_nickname());
}

std::string PhoneBook::get_phone_number(int i)
{
        return (phonebook[i].get_phone_number());
}

std::string PhoneBook::get_darkest_secret(int i)
{
        return (phonebook[i].get_darkest_secret());
}

void    PhoneBook::create_new_contact(int i, std::string f, std::string l, std::string n, std::string p, std::string d)
{
        phonebook[i].set_value(f, l, n, p, d);
}
