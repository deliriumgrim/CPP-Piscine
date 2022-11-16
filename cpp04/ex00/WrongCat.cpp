#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat &WrongCat::operator=(const WrongCat &obj) {
	std::cout<< "WrongCat overload operator \"=\" called" << std::endl;
	if (this == &obj)
		return *this;
	this->type = obj.getType();
	return *this;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal() {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = obj;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat default destructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat: meow, meow..." << std::endl;
}
