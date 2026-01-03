#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>
class WrongAnimal {
	protected :
		std::string	type;
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal &original);
		WrongAnimal &operator=(const WrongAnimal &obj);
		~WrongAnimal();
		void makeSound() const;
		const std::string &getType() const;
};

#endif