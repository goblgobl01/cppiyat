#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>
class Cat : public Animal {
	public :
		Cat();
		Cat(const Cat &original);
		Cat &operator=(const Cat &obj);
		~Cat();
		void makeSound() const;
};

#endif