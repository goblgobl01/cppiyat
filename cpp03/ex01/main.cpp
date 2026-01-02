#include "ScavTrap.hpp"

int main()
{
	std::cout << "--- 1. Testing Construction/Destruction Chaining ---" << std::endl;
		ScavTrap scav("Serena");
	std::cout << std::endl;

	std::cout << "--- 2. Testing ScavTrap Specific Values ---" << std::endl;
	ScavTrap st("ST-42");
	st.attack("a training dummy"); 
	st.takeDamage(30); 
	st.beRepaired(20); 

	std::cout << std::endl;
	std::cout << "--- 3. Testing Special Ability ---" << std::endl;
	st.guardGate();

	std::cout << std::endl;
	std::cout << "--- 4. Testing Out of Energy/HP ---" << std::endl;
	ScavTrap exhausted("TiredBot");
	exhausted.takeDamage(100);
	exhausted.attack("target");
	exhausted.beRepaired(10);

	return 0;
}
