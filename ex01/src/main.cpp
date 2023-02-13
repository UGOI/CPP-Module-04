#include <iostream>
#include "./include/Animal.hpp"
#include "./include/Dog.hpp"
#include "./include/Cat.hpp"

// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();

// delete meta;
// delete j;
// delete i;
// return 0;
// }

int main()
{
Animal* animals[2];

animals[0] = new Dog();
animals[1] = new Cat();
for (int i = 0; i < 2; i++)
{
	animals[i]->makeSound();
}
for (int i = 0; i < 2; i++)
{
	delete animals[i];
}
return 0;
}
