#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

class PhoneBook{

	public:

		Phonebook();
		~Phonebook();
		void	create_new_contact(std::string f, std::string l, std::string n, std::string p, std::string d);
		Contact	get_contact(int i);
		std::string get_first_name(int i);
		std::string get_last_name(int i);
		std::string get_nickname(int i);
		std::string get_phone_number(int i);
		std::string get_first_name(int i);
		
	private:
		Contact phonebook[8];
};
#endif
