#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
class ScavTrap : public ClapTrap {
	private :
		std::string	name;
		int			HitPoint;
		int			EnergyPoint;
		int			AttackDamage;
	public :
		ScavTrap();
		ScavTrap(std::string _name);
		ScavTrap(const ScavTrap &original);
		ScavTrap &operator=(const ScavTrap &obj);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};

#endif