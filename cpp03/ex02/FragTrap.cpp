#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout<<"FragTrap Default constructor called"<<std::endl;
	name = "FragTrap Default";
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string _name): ClapTrap(_name)
{
	std::cout<<"FragTrap constructor called name set"<<std::endl;
	name = _name;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &original) : ClapTrap(original)
{
	std::cout<<"FragTrap Copy constructor called"<<std::endl;
	*this = original;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	std::cout<<"FragTrap Copy assignment operator called"<<std::endl;
	if (this != &obj)
		ClapTrap::operator=(obj);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout<<"FragTrap Destructor called"<<std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->EnergyPoint > 0 && this->HitPoint > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target <<", causing " << this->AttackDamage << " points of damage!" <<std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "FragTrap " << this->name << " no energy points to attack"<<std::endl;
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->name << " highfive"<<std::endl;
}
