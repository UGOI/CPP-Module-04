#pragma once
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal() = 0;
	virtual void makeSound() const = 0;
	std::string getType() const;
};
