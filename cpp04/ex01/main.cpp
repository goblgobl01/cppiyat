#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const int numAnimals = 4;
	Animal* animals[numAnimals];

	std::cout << "--- CREATING ANIMALS ---" << std::endl;
	for (int i = 0; i < numAnimals; i++) {
		if (i < numAnimals / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << "--- animal created ---" << i << std::endl;
	}
	{
		std::cout << "\n--- TESTING DEEP COPY ---" << std::endl;
		Dog basic;
		basic.setIdea("idea 0", 0);
		Dog tmp = basic;
		std::cout<< "tmp idea number 0 " << tmp.getIdea(0) << std::endl;
		std::cout<< "basic idea number 0 " << basic.getIdea(0) << std::endl;
		basic.setIdea("idea 1", 0);
		std::cout<< "=============================" << std::endl;
		std::cout<< "tmp idea number 0 " << tmp.getIdea(0) << std::endl;
		std::cout<< "basic idea number 0 " << basic.getIdea(0) << std::endl;
	}
	std::cout << "\n--- DELETING ANIMALS ---" << std::endl;
	for (int i = 0; i < numAnimals; i++) {
		delete animals[i];
		std::cout << "--- animal deleted ---" << i << std::endl;
	}
	return 0;
}
