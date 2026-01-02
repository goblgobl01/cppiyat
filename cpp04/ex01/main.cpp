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
	std::cout << "============== without using the virual keyword =============" << std::endl;
	const WrongAnimal* Wrong_meta = new WrongAnimal();
	const WrongAnimal* Wrong_i = new WrongCat();
	std::cout << Wrong_i->getType() << " " << std::endl;
	Wrong_i->makeSound();
	Wrong_meta->makeSound();
	std::cout << "============== allocating on the stack =============" << std::endl;
	Animal animal = Animal();
	Animal dog = Dog();
	Animal cat = Cat();
	std::cout << dog.getType() << " " << std::endl;
	std::cout << cat.getType() << " " << std::endl;
	cat.makeSound();
	dog.makeSound();
	animal.makeSound();
	return 0;
}