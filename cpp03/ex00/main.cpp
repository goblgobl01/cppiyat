#include "ClapTrap.hpp"

int main()
{
	std::cout << "--- 1. Testing Constructors and Destructor ---" << std::endl;
	{
		ClapTrap defaultTrap;
		ClapTrap namedTrap("Simo");
		ClapTrap copyTrap(namedTrap);
		ClapTrap assignedTrap;
		assignedTrap = namedTrap;
	}

	std::cout << "\n--- 2. Testing Basic Actions ---" << std::endl;
	ClapTrap clappy("Clappy");
	clappy.attack("Target A");
	clappy.takeDamage(5);
	clappy.beRepaired(3);

	std::cout << "\n--- 3. Testing Energy Depletion ---" << std::endl;
	ClapTrap tireless("Tireless");
	for (int i = 0; i < 10; i++) {
		tireless.attack("a training dummy");
	}
	tireless.beRepaired(5);

	std::cout << "\n--- 4. Testing Death (0 Hit Points) ---" << std::endl;
	ClapTrap fragile("Fragile");
	fragile.takeDamage(10);
	fragile.attack("an enemy");
	fragile.beRepaired(5);
	fragile.takeDamage(1);

	std::cout << "\n--- 5. Testing Over-Damage and Over-Repair ---" << std::endl;
	ClapTrap tank("Tank");
	tank.takeDamage(50);
	tank.beRepaired(10);

	return 0;
}