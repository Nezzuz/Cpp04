#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Initializing a dog object" << std::endl;
}

Dog::Dog(Dog& copy)
{
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
	std::cout << "Destroying a dog object" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog making his sound" << std::endl;
}

