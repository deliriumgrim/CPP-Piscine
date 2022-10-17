#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &obj);
	Fixed &operator=(const Fixed &obj);
	~Fixed();

	int		getRawBits( void ) const;
	void 	setRawBits( int const raw);
	float 	toFloat( void ) const;
	int 	toInt( void ) const;

private:
	int _number;
	static const int _bits = 8;
};

std::ostream &operator << (std::ostream &os, const Fixed &obj);

#endif
