#include "Zombie.hpp"

Zombie:: Zombie()
{
	std::cout<<"Zombie has been constructed without a name"<<std::endl;
}

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

void Zombie::set_name(std::string nom)
{
	name = nom;
}
