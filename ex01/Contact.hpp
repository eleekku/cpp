#ifndef CONTACT_HPP
#define CONTACT_HPP

# include "phonebook_main.hpp"

class Contact{

private: 
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	
	Contact();

	~Contact();	
	
	int		contact;
	void	set_value(std::string f, std::string l, std::string n, std::string p, std::string d);
	void	ft_print(void)const;
		
	std::string get_first_name()const;
	std::string	get_last_name()const;
	std::string get_nickname()const;
	std::string get_phone_number()const;
	std::string get_darkest_secret()const;
};
#endif
