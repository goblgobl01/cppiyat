#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout<<"ClapTrap Default constructor called"<<std::endl;
	name = "ClapTrap Default";
	HitPoint = 10;
	EnergyPoint = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string _name)
{
	std::cout<<"ClapTrap constructor called name set"<<std::endl;
	name = _name;
	HitPoint = 10;
	EnergyPoint = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
	std::cout<<"ClapTrap Copy constructor called"<<std::endl;
	*this = original;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout<<"ClapTrap Copy assignment operator called"<<std::endl;
	if (this == &obj)
		return (*this);
	name = obj.name;
	HitPoint = obj.HitPoint;
	EnergyPoint = obj.EnergyPoint;
	AttackDamage = obj.AttackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout<<"ClapTrap Destructor called"<<std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoint > 0 && this->HitPoint > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target <<", causing " << this->AttackDamage << " points of damage!" <<std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "ClapTrap " << this->name << " no energy points to attack"<<std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoint > 0)
	{
		std::cout << "ClapTrap " << this->name << " was damaged , causing to lose" << amount << " points of health!"<<std::endl;
		if (amount >= (unsigned int)this->HitPoint)
			this->HitPoint = 0;
		else
			this->HitPoint -= amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " is already dead doesn't have any hit point !"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoint > 0 && this->HitPoint > 0)
	{
		std::cout << "ClapTrap " << this->name << " regained this amount " << amount << " of hit point!"<< std::endl;
		this->HitPoint += amount;
		this->EnergyPoint--;
	}
	else
		std::cout << "ClapTrap " << this->name << " no energy points to be repaired !"<<std::endl;
}