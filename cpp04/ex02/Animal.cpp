#include "Animal.hpp"

std::string Animal::getType() const{
	return this->type;
}

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Animal";
}

Animal &Animal::operator=(const Animal &obj) {
	std::cout<< "Animal overload operator \"=\" called" << std::endl;
	this->type = obj.getType();
	return (*this);
}

Animal::Animal(const Animal &obj) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}
