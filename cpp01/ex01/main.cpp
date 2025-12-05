#include "Zombie.hpp"

int main()
{
	int N = 10;
	Zombie *zombies = zombieHorde(N, "BOBS");
	if (zombies)
	{
		for (int i = 0; i < N; i++)
			zombies[i].announce(); 
	}
	else
		std::cout<<"bad allocation maybe"<<std::endl;
	delete[] zombies;
}