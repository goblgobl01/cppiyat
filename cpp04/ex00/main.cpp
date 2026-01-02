#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "=========================" << std::endl;
	const WrongAnimal* Wrong_meta = new WrongAnimal();
	const WrongAnimal* Wrong_i = new WrongCat();
	std::cout << Wrong_i->getType() << " " << std::endl;
	Wrong_i->makeSound();
	Wrong_meta->makeSound();
	return 0;
	// Animal meta = Animal();
	// Animal j = Dog();
	// Animal i = Cat();
	// std::cout << j.getType() << " " << std::endl;
	// std::cout << i.getType() << " " << std::endl;
	// i.makeSound();
	// j.makeSound();
	// meta.makeSound();
	// return 0;
}