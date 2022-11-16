#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain;
}

Dog &Dog::operator=(const Dog &obj) {
	std::cout<< "Dog overload operator \"=\" called" << std::endl;
	if (this == &obj)
		return *this;
	this->type = obj.getType();
	*this->_brain = *obj._brain;
	return *this;
}

Dog::Dog(const Dog &obj) : Animal() {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain;
	*this = obj;
}

Dog::~Dog() {
	std::cout << "Dog default destructor called" << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const {
	std::cout << "Dog: woof, woof..." << std::endl;
}
