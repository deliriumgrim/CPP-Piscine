#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_number = 0;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->_number = number << this->_bits;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->_number = roundf(number * (1 << this->_bits));
}

Fixed::Fixed(Fixed const &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed &Fixed::operator = ( const Fixed &obj ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_number = obj.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	return this->_number;
}

void Fixed::setRawBits(const int raw) {
	this->_number = raw;
}

float Fixed::toFloat(void) const {
	return ( this->_number / (float) (1 << this->_bits) );
}

int Fixed::toInt(void) const {
	return ( this->_number >> this->_bits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj) {
	os << obj.toFloat();
	return ( os );
}
