#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog &Dog::operator=(const Dog &obj) {
	std::cout<< "Dog overload operator \"=\" called" << std::endl;
	this->type = obj.getType();
	return *this;
}

Dog::Dog(const Dog &obj) : Animal() {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog::~Dog() {
	std::cout << "Dog default destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Dog: woof, woof..." << std::endl;
}
