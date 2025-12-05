#include "Zombie.hpp"

int main()
{
	int N = 10;
	Zombie *zombies = zombieHorde(10, "BOBS");
	for (int i; i < N; i++)
		zombies[i].announce(); 
	delete[] zombies;
}