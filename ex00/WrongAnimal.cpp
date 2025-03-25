#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "wrong animal";
	std::cout << "Generic wrong animal object created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& copy)
{
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Generic wrong animal object destroyed" << std::endl;
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "Generic sound of a generic wrong animal..." << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	if (!this->type.empty())
		return (this->type);
	else
		return (NULL);
}

