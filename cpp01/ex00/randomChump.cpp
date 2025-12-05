#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie *newZombie;

	newZombie = Zombie(name);
	newZombie->announce();
}