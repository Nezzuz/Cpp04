#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog object created" << std::endl;
	_DogBrain = new Brain;

}

Dog::Dog(Dog& copy)
{
	std::cout << "**************Creating a DOG object from the copy constructor**************" << std::endl;
	*this = copy;
}

Dog&	Dog::operator=(Dog& copy)
{
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog object destroyed" << std::endl;
	delete _DogBrain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog making his sound" << std::endl;
}

std::string	Dog::getType(const Dog& copy) const
{
	return (this->type);
}

