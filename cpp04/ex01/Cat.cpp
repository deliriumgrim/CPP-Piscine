#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat &Cat::operator=(const Cat &obj) {
	std::cout<< "Cat overload operator \"=\" called" << std::endl;
	if (this == &obj)
		return *this;
	this->type = obj.getType();
	*this->_brain = *obj._brain;
	return *this;
}

Cat::Cat(const Cat &obj) : Animal() {
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = obj;
}

Cat::~Cat() {
	std::cout << "Cat default destructor called" << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const {
	std::cout << "Cat: meow, meow..." << std::endl;
}
