#include "WrongAnimal.hpp"

std::string WrongAnimal::getType() const{
	return this->type;
}

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "Animal";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj) {
	std::cout<< "WrongAnimal overload operator \"=\" called" << std::endl;
	if (this == &obj)
		return *this;
	this->type = obj.getType();
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound" << std::endl;
}
