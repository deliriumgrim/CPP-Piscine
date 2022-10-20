#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < (int)this->ideas->length(); i++) {
		this->ideas[i] = "idea";
	}
}

Brain::Brain( const Brain &obj ) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = obj;
}

Brain &Brain::operator = (const Brain &obj) {
	std::cout << "Brain overload operator \"=\" called" << std::endl;
	for(int i = 0; i < (int)this->ideas->length(); i++) {
		this->ideas[i] = obj.ideas[i];
	}
	return (*this);
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called" << std::endl;
}
