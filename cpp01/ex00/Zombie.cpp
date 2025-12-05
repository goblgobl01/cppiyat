#include "Zombie.hpp"

Zombie:: Zombie(std::string name) : name(name) 
{
	std::cout<<name<<": Zombie has been constructed"<<std::endl;
}

void Zombie::announce(void)
{
	std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie:: ~Zombie() {
	std::cout<<name<<": Zombie has been deconstructed"<<std::endl;
}
