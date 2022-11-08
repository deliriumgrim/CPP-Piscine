#include "Zombie.hpp"

int main()
{
	int numbers = 5;
	if (numbers <= 0)
	{
		std::cout << "Required number must be greater than 0" << std::endl;
		return 1;
	}
	Zombie *horde = zombieHorde(numbers, "horde");
	for(int i = 0; i < numbers; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}
