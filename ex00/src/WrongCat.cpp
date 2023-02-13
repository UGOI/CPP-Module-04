#include "./include/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong destructor" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound: Bruh!" << std::endl;
}
