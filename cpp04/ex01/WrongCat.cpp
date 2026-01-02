#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout<<"WrongCat Default constructor called"<<std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &original): WrongAnimal(original)
{
	std::cout<<"WrongCat Copy constructor called"<<std::endl;
	*this = original;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	std::cout<<"WrongCat Copy assignment operator called"<<std::endl;
	if (this != &obj)
		WrongAnimal::operator=(obj);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout<<"WrongCat Destructor called"<<std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "im cold" <<std::endl;
}
