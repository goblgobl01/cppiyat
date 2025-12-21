#include "ScavTrap.hpp"

int main()
{
    std::cout << "--- 1. Testing Construction/Destruction Chaining ---" << std::endl;
    {
        // This should print: ClapTrap constructor -> ScavTrap constructor
        ScavTrap scav("Serena");
        // This should print: ScavTrap destructor -> ClapTrap destructor
    }
    std::cout << std::endl;

    std::cout << "--- 2. Testing ScavTrap Specific Values ---" << std::endl;
    ScavTrap st("ST-42");
    // Should use ScavTrap::attack (20 damage)
    st.attack("a training dummy"); 
    // Should use ClapTrap::takeDamage (Inherited)
    st.takeDamage(30); 
    // Should use ClapTrap::beRepaired (Inherited)
    st.beRepaired(20); 

    std::cout << std::endl;
    std::cout << "--- 3. Testing Special Ability ---" << std::endl;
    st.guardGate();

    std::cout << std::endl;
    std::cout << "--- 4. Testing Out of Energy/HP ---" << std::endl;
    ScavTrap exhausted("TiredBot");
    exhausted.takeDamage(100); // Should be dead
    exhausted.attack("target"); // Should fail (Dead)
    exhausted.beRepaired(10);  // Should fail (Dead)

    return 0;
}
