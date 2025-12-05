#include "Zombie.hpp"

int main()
{
	Zombie *heap_zombie = newZombie("heap_Zombie");
	heap_zombie->announce();
	randomChump("stack_zombie");
	delete heap_zombie;
}