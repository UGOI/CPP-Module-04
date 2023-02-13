#include "./include/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Mijau!" << std::endl;
}
