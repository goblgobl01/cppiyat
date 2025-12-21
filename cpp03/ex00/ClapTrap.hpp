#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>
class ClapTrap {
	private :
		std::string	name;
		int			HitPoint;
		int			EnergyPoint;
		int			AttackDamage;
	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &original);
		ClapTrap &operator=(const ClapTrap &obj);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif