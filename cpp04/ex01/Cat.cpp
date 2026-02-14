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
	this->cat_brain = new Brain(*(original.cat_brain));
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout<<"Cat Copy assignment operator called"<<std::endl;
	if (this != &obj)
	{
		Animal::operator=(obj);
		delete (this->cat_brain);
		this->cat_brain = new Brain(*(obj.cat_brain));
	}
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
	if (idx >= 0 && idx < 100)
		cat_brain->ideas[idx] = idea;
	else
		std::cout << "Error\n" << std::endl;
}

std::string Cat::getIdea(int idx) const
{
	if (idx >= 0 && idx < 100)
		return cat_brain->ideas[idx];
	else
		return ("Error\n");
}