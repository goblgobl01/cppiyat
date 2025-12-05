#include "Zombie.hpp"
#include <iostream>

void Zombie::announce(void)
{
	std::cout<<"%s: : BraiiiiiiinnnzzzZ..."<<name<<std::endl;
}

Zombie* newZombie(std::string name)
{
	return (new Zombie(name));
}

void randomChump( std::string name )
{
	Zombie *newZombie;

	newZombie = new Zombie(name);
	newZombie->announce();
}