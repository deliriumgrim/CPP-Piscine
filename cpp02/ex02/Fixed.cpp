#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_number = 0;
}

Fixed::Fixed(const int number)
{
	this->_number = number << this->_bits;
}

Fixed::Fixed(const float number)
{
	this->_number = roundf(number * (1 << this->_bits));
}

Fixed::Fixed(Fixed const &obj)
{
	*this = obj;
}

Fixed::~Fixed() {}

Fixed &Fixed::operator = ( const Fixed &obj ) {
	if (this != &obj)
		this->_number = obj.getRawBits();
	return (*this);
}

Fixed Fixed::operator + ( const Fixed &obj ) const {
	return (Fixed(this->toFloat() + obj.toFloat()));
}

Fixed Fixed::operator - ( const Fixed &obj ) const {
	return (Fixed(this->toFloat() - obj.toFloat()));
}

Fixed Fixed::operator * (const Fixed &obj) const {
	return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed Fixed::operator / (const Fixed &obj) const {
	return (Fixed(this->toFloat() / obj.toFloat()));
}

bool Fixed::operator > (const Fixed &obj) const {
	return (this->toFloat() > obj.toFloat());
}

bool Fixed::operator >= (const Fixed &obj) const {
	return (this->toFloat() >= obj.toFloat());
}

bool Fixed::operator < (const Fixed &obj) const {
	return (this->toFloat() < obj.toFloat());
}

bool Fixed::operator <= (const Fixed &obj) const {
	return (this->toFloat() <= obj.toFloat());
}

bool Fixed::operator == (const Fixed &obj) const {
	return (this->toFloat() == obj.toFloat());
}

bool Fixed::operator != (const Fixed &obj) const {
	return (this->toFloat() != obj.toFloat());
}

Fixed Fixed::operator++( int ) {
	float temp = this->toFloat();
	this->_number++;
	return (Fixed(temp));
}

Fixed &Fixed::operator++( void ) {
	this->_number++;
	return (*this);
}

Fixed Fixed::operator--( int ) {
	float temp = this->toFloat();
	this->_number--;
	return (Fixed(temp));
}

Fixed &Fixed::operator--( void ) {
	this->_number--;
	return (*this);
}

const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2) {
	if (obj1 <= obj2)
		return obj1;
	else
		return obj2;
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2) {
	if (obj1 <= obj2)
		return obj1;
	else
		return obj2;
}

const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2) {
	if (obj1 >= obj2)
		return obj1;
	else
		return obj2;
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2) {
	if (obj1 >= obj2)
		return obj1;
	else
		return obj2;
}

int Fixed::getRawBits( void ) const {
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
