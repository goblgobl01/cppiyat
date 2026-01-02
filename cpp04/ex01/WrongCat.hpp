#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>
class WrongCat : public WrongAnimal {
	public :
		WrongCat();
		WrongCat(const WrongCat &original);
		WrongCat &operator=(const WrongCat &obj);
		~WrongCat();
		void makeSound() const;
};

#endif