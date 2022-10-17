#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("Jack");
	zombie->announce();
	delete(zombie);
	randomChump("Denny");
	return 0;
}
