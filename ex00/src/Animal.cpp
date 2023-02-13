#include "./include/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor" << std::endl;
	this->type = "Animal";
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}
