#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout<<"Dog Default constructor called"<<std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &original): Animal(original)
{
	std::cout<<"Dog Copy constructor called"<<std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout<<"Dog Copy assignment operator called"<<std::endl;
	if (this != &obj)
		Animal::operator=(obj);
	return (*this);
}

Dog::~Dog()
{
	std::cout<<"Dog Destructor called"<<std::endl;
}

void Dog::makeSound() const
{
	std::cout << "haw haw" <<std::endl;
}
