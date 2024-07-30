#include "phonebook_main.hpp"

int main(void)
{
        std::string user_command;
        PhoneBook   phonebook;
        int         i;

        while (!std::cin.eof())
        {
            std::cout << "Please enter a command (SEARCH / ADD / EXIR)\n";
            if (std::cin.eof())
            std::cout << "hello" << std::endl;
        }
        return (0);
}