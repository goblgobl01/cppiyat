#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout<<"ScavTrap Default constructor called"<<std::endl;
	name = "ScavTrap Default";
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string _name)
{
	std::cout<<"ScavTrap constructor called name set"<<std::endl;
	name = _name;
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &original) : ClapTrap(original)
{
	std::cout<<"ScavTrap Copy constructor called"<<std::endl;
	*this = original;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout<<"ScavTrap Copy assignment operator called"<<std::endl;
	if (this != &obj)
		ClapTrap::operator=(obj);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout<<"ScavTrap Destructor called"<<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->EnergyPoint > 0 && this->HitPoint > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target <<", causing " << this->AttackDamage << " points of damage!" <<std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "ScavTrap " << this->name << " no energy points to attack"<<std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is in gate keeper mode"<<std::endl;
}
