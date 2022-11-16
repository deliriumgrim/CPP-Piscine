#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat &Cat::operator=(const Cat &obj) {
	std::cout<< "Cat overload operator \"=\" called" << std::endl;
	if (this == &obj)
		return *this;
	this->type = obj.getType();
	return *this;
}

Cat::Cat(const Cat &obj) : Animal() {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat::~Cat() {
	std::cout << "Cat default destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Cat: meow, meow..." << std::endl;
}
