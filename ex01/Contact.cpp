#include "phonebook_main.hpp"

Contact::Contact(){

}

Contact::~Contact(){

}

void Contact::set_value(std::string f, std::string l, std::string n, std::string p, std::string d){
		first_name = f;
		last_name = l;
 		nickname = n;
		phone_number = p;
		darkest_secret = d;
}

void	Contact::ft_print(void) const{
		std::cout << "First name: " << this->first_name << std::endl;
		std::cout << "Last name: " << this->last_name << std::endl;
		std::cout << "Nickname: " << this->nickname << std::endl;
		std::cout << "Phone number: " << this->phone_number << std::endl;
		std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

std::string	Contact::get_first_name() const{
		return(first_name);
}

std::string	Contact::get_last_name() const{
		return(last_name);
}

std::string	Contact::get_nickname() const{
		return(nickname);
}

std::string	Contact::get_phone_number() const{
		return(phone_number);
}

std::string Contact::get_darkest_secret() const{
		return(darkest_secret);
}



