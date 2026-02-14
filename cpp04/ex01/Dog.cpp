#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout<<"Dog Default constructor called"<<std::endl;
	this->type = "Dog";
	this->dog_brain = new Brain();
}

Dog::Dog(const Dog &original): Animal(original)
{
	std::cout<<"Dog Copy constructor called"<<std::endl;
	this->dog_brain = new Brain(*(original.dog_brain));
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout<<"Dog Copy assignment operator called"<<std::endl;
	if (this != &obj)
	{
		Animal::operator=(obj);
		delete(this->dog_brain);
		this->dog_brain = new Brain(*(obj.dog_brain));
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout<<"Dog Destructor called"<<std::endl;
	delete(this->dog_brain);
}

void Dog::makeSound() const
{
	std::cout << "haw haw" <<std::endl;
}

void Dog::setIdea(const std::string& idea, int idx)
{
	if (idx >= 0 && idx < 100)
		dog_brain->ideas[idx] = idea;
	else
		std::cout << "Error\n" << std::endl;
}

std::string Dog::getIdea(int idx) const
{
	if (idx >= 0 && idx < 100)
		return dog_brain->ideas[idx];
	else
		return ("Error\n");
}
