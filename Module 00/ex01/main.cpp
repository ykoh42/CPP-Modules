#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook   PhoneBook;
	std::string cmd;

	while (true)
	{
		std::cout << ">> ";
		if (std::getline(std::cin, cmd).eof())
		{
			std::cout << std::endl << "PROGRAM EXIT!" << std::endl;
			break ;
		}
		if (cmd.compare("EXIT") == 0)
		{
			std::cout << "PROGRAM EXIT!" << std::endl;
			break ;
		}
		else if (cmd.compare("ADD") == 0)
		{
			if (PhoneBook.AddContact() == 0)
			{
				std::cout << std::endl << "PROGRAM EXIT!" << std::endl;
				break ;
			}
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			if (PhoneBook.ShowContact() == 0)
			{
				std::cout << std::endl << "PROGRAM EXIT!" << std::endl;
				break ;
			}
		}
	}
	return (0);
}