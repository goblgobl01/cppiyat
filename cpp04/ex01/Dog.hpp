#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>
class Dog : public Animal{
	public :
		Dog();
		Dog(const Dog &original);
		Dog &operator=(const Dog &obj);
		~Dog();
		void makeSound() const;
};

#endif