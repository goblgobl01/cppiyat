#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N == 0)
		return NULL;
	Zombie *ptr;

	ptr = new(std::nothrow) Zombie[N];
	if (!ptr)
		return NULL;
	for (int i; i < N; i++)
		ptr[i].set_name(name);
	return ptr;
}