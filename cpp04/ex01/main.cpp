#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	Animal *animals[4];

	for (int i = 0; i < 4; ++i) {
		if (i % 2 == 0)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
	}

	for (int i = 0; i < 4; ++i) {
		delete animals[i];
	}

	std::cout << " " << std::endl;
	std::cout << "Deep copy test" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	return 0;
}
