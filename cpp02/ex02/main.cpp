#include "Fixed.hpp"

int main() {
	Fixed	a;
	Fixed const	b(Fixed( 5.05f ) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	Fixed x(5.5f);
	Fixed y(2);
	std::cout << "Additional tests" << std::endl;
	std::cout << "x=" << x << " y=" << y << std::endl;

	std::cout << "Min" << std::endl;
	std::cout << Fixed::min(x, y) << std::endl;

	std::cout << "Sum" << std::endl;
	std::cout << x + y << std::endl;

	std::cout << "Diff" << std::endl;
	std::cout << x - y << std::endl;

	std::cout << "Division" << std::endl;
	std::cout << x / y << std::endl;

	std::cout << "Comparison" << std::endl;
	std::cout << (x > y) << std::endl;
	std::cout << (x >= y) << std::endl;
	std::cout << (x < y) << std::endl;
	std::cout << (x <= y) << std::endl;
	std::cout << (x != y) << std::endl;
	std::cout << (x == y) << std::endl;

	std::cout << "Decrement" << std::endl;
	std::cout << x << std::endl;
	std::cout << --x << std::endl;
	std::cout << x << std::endl;
	std::cout << x-- << std::endl;
	std::cout << x << std::endl;

	return 0;
}
