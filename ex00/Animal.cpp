#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Generic animal object created" << std::endl;
}

Animal::Animal(Animal& copy)
{
	*this = copy;
}

Animal::Animal& operator=(Animal& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Generic animal object destroyed" << std::endl;
}

void		Animal::makeSound(void)
{
	std::cout << "Generic sound of a generic animal..." << std::endl;
}

std::string	Animal::get_name(void)
{
	if (this->type)
		return (this->type);
	else
		return (NULL);
}

void		Animal::set_name(std::string name)
{
	this->type = name;
}
