#include "./include/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	this->brain->~Brain();
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignation operator" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat sound: Mijau!" << std::endl;
}
