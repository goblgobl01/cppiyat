#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout<<"Cat Default constructor called"<<std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &original): Animal(original)
{
	std::cout<<"Cat Copy constructor called"<<std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout<<"Cat Copy assignment operator called"<<std::endl;
	if (this != &obj)
		Animal::operator=(obj);
	return (*this);
}

Cat::~Cat()
{
	std::cout<<"Cat Destructor called"<<std::endl;
}

void Cat::makeSound() const
{
	std::cout << "im cold" <<std::endl;
}
