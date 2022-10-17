#include "PhoneBook.hpp"

int main()
{
	PhoneBook 	book;
	std::string	line;
	while (true)
	{
		std::cout << "Enter command > " << std::endl;
		std::getline(std::cin, line);
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
			continue ;
		}
		else if (line == "ADD")
			book.addContact();
		else if (line == "SEARCH")
			book.searchContact();
		else if (line == "EXIT")
			book.exitTheBook();
		else
			std::cout << "Please enter: ADD, SEARCH or EXIT." << std::endl;
	}
}
