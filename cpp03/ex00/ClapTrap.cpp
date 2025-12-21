#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout<<"Default constructor called"<<std::endl;
	name = "";
	HitPoint = 10;
	EnergyPoint = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string _name)
{
	std::cout<<"constructor called name set"<<std::endl;
	name = _name;
	HitPoint = 10;
	EnergyPoint = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = original;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
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
	std::cout<<"Destructor called"<<std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoint > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target <<", causing " << this->AttackDamage << " points of damage" <<std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "ClapTrap " << this->name << "no energy points to attack"<<std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " was damaged , causing to lose" << amount << " points of health"<<std::endl;
	this->HitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoint > 0)
	{
		std::cout << "ClapTrap " << this->name << " hit points got repaired by this amount " << amount << std::endl;
		this->HitPoint += amount;
		this->EnergyPoint--;
	}
	else
		std::cout << "ClapTrap " << this->name << "no energy points to be repaired"<<std::endl;
}