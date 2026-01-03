#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout<<"WrongAnimal Default constructor called"<<std::endl;
	type = "default";
}

WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
	std::cout<<"WrongAnimal Copy constructor called"<<std::endl;
	type = original.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout<<"WrongAnimal Copy assignment operator called"<<std::endl;
	if (this == &obj)
		return (*this);
	type = obj.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout<<"WrongAnimal Destructor called"<<std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "new species" <<std::endl;
}

