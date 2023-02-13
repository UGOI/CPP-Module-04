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

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor" << std::endl;
	this->type = other.type;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignation operator" << std::endl;
	this->type = other.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}
