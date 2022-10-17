#include "Contact.hpp"

void Contact::setContact(size_t index)
{
	std::string line;
	this->_index = index + 1;
	this->_isPresent = true;
	std::cout<<"Enter the first name:"<<std::endl;
	_writeData(this->_firstName);
	std::cout<<"Enter the last name:"<<std::endl;
	_writeData(this->_lastName);
	std::cout<<"Enter the nickname:"<<std::endl;
	_writeData(this->_nickName);
	std::cout<<"Enter the phone number:"<<std::endl;
	_writeData(this->_phoneNumber);
	std::cout<<"Enter the darkest secret:"<<std::endl;
	_writeData(this->_darkSecret);
}

bool Contact::isPresent()
{
	return this->_isPresent;
}

Contact::Contact()
{
	this->_isPresent = false;
}

void Contact::_showInfo()
{
	std::cout<< "|" << std::setw(10)<<this->_index<<"|";
	std::cout<< std::setw(10)
	<< (this->_firstName.length() > 10 ? this->_firstName.substr(0, 9).append(".") : this->_firstName)<<"|";
	std::cout<< std::setw(10)
	<< (this->_lastName.length() > 10 ? this->_lastName.substr(0, 9).append(".") : this->_lastName)<<"|";
	std::cout<< std::setw(10)
	<< (this->_nickName.length() > 10 ? this->_nickName.substr(0, 9).append(".") : this->_nickName)<<"|"
	<<std::endl;
}

void Contact::_showFullInformation()
{
	std::cout << "Information of contact"<<std::endl;
	std::cout << "Index: " << this->_index << std::endl;
	std::cout << "First Name: " << this->_firstName << std::endl;
	std::cout << "Last Name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickName << std::endl;
	std::cout << "Phone Number: " << this->_phoneNumber << std::endl;
	std::cout << "Dark Secret: " << this->_darkSecret << std::endl;
}

void Contact::_writeData(std::string &filed)
{
	bool flag;

	flag = true;
	while( flag )
	{
		std::getline(std::cin, filed);
		if(std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
			continue ;
		}
		else if( filed.empty() )
			continue ;
		else
			flag = false;
	}
}
