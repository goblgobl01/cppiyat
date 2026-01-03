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
	*this = original;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout<<"Dog Copy assignment operator called"<<std::endl;
	if (this != &obj)
		Animal::operator=(obj);
	this->dog_brain = new Brain(*(obj.dog_brain));
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
	dog_brain->ideas[idx] = idea;
}

std::string Dog::getIdea(int idx) const
{
	return dog_brain->ideas[idx];
}
