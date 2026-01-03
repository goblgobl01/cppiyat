#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>
class Dog : public Animal{
	private :
		Brain *dog_brain;
	public :
		Dog();
		Dog(const Dog &original);
		Dog &operator=(const Dog &obj);
		~Dog();
		void makeSound() const;
		void setIdea(const std::string& idea, int idx);
		std::string getIdea(int idx) const;
};

#endif