#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout<<"Cat Default constructor called"<<std::endl;
	this->type = "Cat";
	this->cat_brain = new Brain();
}

Cat::Cat(const Cat &original): Animal(original)
{
	std::cout<<"Cat Copy constructor called"<<std::endl;
	*this = original;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout<<"Cat Copy assignment operator called"<<std::endl;
	if (this != &obj)
		Animal::operator=(obj);
	this->cat_brain = new Brain(*(obj.cat_brain));
	return (*this);
}

Cat::~Cat()
{
	std::cout<<"Cat Destructor called"<<std::endl;
	delete(this->cat_brain);
}

void Cat::makeSound() const
{
	std::cout << "im cold" <<std::endl;
}

void Cat::setIdea(const std::string& idea, int idx)
{
	cat_brain->ideas[idx] = idea;
}

std::string Cat::getIdea(int idx) const
{
	return cat_brain->ideas[idx];
}