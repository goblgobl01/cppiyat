#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>
class Cat : public Animal{
	private:
		Brain *cat_brain;
	public :
		Cat();
		Cat(const Cat &original);
		Cat &operator=(const Cat &obj);
		~Cat();
		void makeSound() const;
		void setIdea(const std::string& idea, int idx);
		std::string getIdea(int idx) const;
};

#endif