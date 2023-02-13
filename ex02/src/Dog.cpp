#include "./include/Dog.hpp"
#include "./include/Brain.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	this->brain->~Brain();
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy constructor" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog assignation operator" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog sound: Wuff! Wuff!" << std::endl;
}
