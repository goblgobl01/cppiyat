#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
class FragTrap : public ClapTrap {
	public :
		FragTrap();
		FragTrap(std::string _name);
		FragTrap(const FragTrap &original);
		FragTrap &operator=(const FragTrap &obj);
		~FragTrap();
		void attack(const std::string& target);
		void highFivesGuys( void );
};

#endif