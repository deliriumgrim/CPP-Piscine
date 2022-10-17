#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "Contact.hpp"

class PhoneBook {

public:
	PhoneBook();
	~PhoneBook();

	void addContact();
	void searchContact();
	void exitTheBook() const;

private:
	Contact _contact[8];
	size_t	_contactCount;

	Contact _getContact(size_t n);
	bool	_isPresent(size_t n);
	void	_showPersonalInfo();
	void	_allData(size_t n);
};


#endif
