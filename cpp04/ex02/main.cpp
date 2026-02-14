#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* meta = new Animal();
	Animal j = Dog();
	Animal i = Cat();
	std::cout << i.getType() << " " << std::endl;
	std::cout << j.getType() << " " << std::endl;
	i.makeSound();
	j.makeSound();
	// meta->makeSound();
	// delete(i);
	// delete(j);
	// delete(meta);
	return 0;
}