#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_contactCount = 0;
	std::cout << "Welcome to Phone Book"<<std::endl;
}

PhoneBook::~PhoneBook(void)
{

}

void PhoneBook::addContact()
{
	this->_contact[this->_contactCount].setContact(this->_contactCount);
	this->_contactCount++;
	if (this->_contactCount == 8)
		this->_contactCount=0;
}

void PhoneBook::searchContact()
{
	int	i;
	i = 0;
	if (PhoneBook::_isPresent(0))
	{
		std::cout << "---------------------------------------------" << std::endl
			  << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl
			  << "---------------------------------------------" << std::endl;
	} else
	{
		std::cout<<"Phone Book is empty"<<std::endl;
		return ;
	}
	while (i < 8)
	{
		if (PhoneBook::_isPresent(i))
			_getContact(i)._showInfo();
		i++;
	}
	_showPersonalInfo();
}

void PhoneBook::exitTheBook() const
{
	std::cout << "Exiting..." <<std::endl;
	exit ( 0 );
}

Contact PhoneBook::_getContact(size_t n)
{
	return _contact[n];
}

bool PhoneBook::_isPresent(size_t n)
{
	return PhoneBook::_getContact(n).isPresent();
}

void PhoneBook::_showPersonalInfo() 
{
	std::string line;
	int index;
	index = -1;
	while (index <= 0 || index > 8) 
	{
		std::cout << "Enter contact index: ";
		std::getline(std::cin, line);
		if (std::cin.eof()) 
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
		if (line.length() == 1)
			index = atoi(line.c_str());
		if (index <= 0 || index > 8) 
		{
			std::cout << "Wrong index" << std::endl;
			std::cout << "It must be between 1 and 8 inclusive" << std::endl;
		}
	}
	if (PhoneBook::_isPresent(index - 1))
		_allData(index - 1);
	else
	{
		std::cout << "Wrong index"<<std::endl;
		std::cout << "Contact with index " << index << " does not exist" <<std::endl;
	}

}

void PhoneBook::_allData(size_t n)
{
	Contact current = _getContact(n);
	current._showFullInformation();
}

