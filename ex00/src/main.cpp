#include <iostream>
#include "./include/Animal.hpp"
#include "./include/Dog.hpp"
#include "./include/Cat.hpp"
#include "./include/WrongAnimal.hpp"
#include "./include/WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

std::cout << "-------------------" << std::endl;

const WrongAnimal* meta2 = new WrongAnimal();
const WrongAnimal* i2 = new WrongCat();
std::cout << i2->getType() << " " << std::endl;
i2->makeSound(); //will output the cat sound!
meta2->makeSound();

delete meta;
delete j;
delete i;
delete meta2;
delete i2;
return 0;
}
