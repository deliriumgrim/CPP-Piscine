#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstdio>

class Contact {

public:
	Contact();
	void		setContact(size_t index);
	bool		isPresent();
	void		_showInfo();
	void		_showFullInformation();
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_darkSecret;
	std::string	_phoneNumber;
	size_t		_index;
	bool		_isPresent;
	void		_writeData(std::string &filed);

};

#endif
