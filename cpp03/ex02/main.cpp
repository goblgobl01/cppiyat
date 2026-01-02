#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "--- CREATING FRAGTRAP ---" << std::endl;
	FragTrap frag("Fraggy");

	std::cout << "\n--- TESTING ATTACK ---" << std::endl;
	frag.attack("Target Dummy");

	std::cout << "\n--- TESTING SPECIAL ---" << std::endl;
	frag.highFivesGuys();

	std::cout << "\n--- TESTING DESTRUCTION ---" << std::endl;
	return 0;
}
