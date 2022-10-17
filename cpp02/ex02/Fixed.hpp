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
	~Fixed();

	Fixed &operator = (const Fixed &obj);

	Fixed operator + (const Fixed &obj) const;
	Fixed operator - (const Fixed &obj) const;
	Fixed operator * (const Fixed &obj) const;
	Fixed operator / (const Fixed &obj) const;

	bool operator > (const Fixed &obj) const;
	bool operator >= (const Fixed &obj) const;
	bool operator < (const Fixed &obj) const;
	bool operator <= (const Fixed &obj) const;
	bool operator == (const Fixed &obj) const;
	bool operator != (const Fixed &obj) const;

	Fixed operator ++ ( int );
	Fixed operator ++ ( void );
	Fixed operator -- ( int );
	Fixed operator -- ( void );

	static const Fixed min(const Fixed &obj1, const Fixed &obj2);
	static Fixed min(Fixed &obj1, Fixed &obj2);
	static const Fixed max(const Fixed &obj1, const Fixed &obj2);
	static Fixed max(Fixed &obj1, Fixed &obj2);

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
