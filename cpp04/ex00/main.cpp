#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

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