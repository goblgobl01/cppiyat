#include "Animal.hpp"

Animal::Animal()
{
	std::cout<<"Animal Default constructor called"<<std::endl;
	type = "default";
}

Animal::Animal(const Animal &original)
{
	std::cout<<"Animal Copy constructor called"<<std::endl;
	*this = original;
}

Animal &Animal::operator=(const Animal &obj)
{
	std::cout<<"Animal Copy assignment operator called"<<std::endl;
	if (this == &obj)
		return (*this);
	type = obj.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout<<"Animal Destructor called"<<std::endl;
}

const std::string &Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "new species" <<std::endl;
}

