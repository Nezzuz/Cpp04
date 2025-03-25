#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat object initialized" << std::endl;
}

Cat::Cat(Cat& copy)
{
	*this = copy;
}

Cat&	Cat::operator=(Cat& copy)
{
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat object destroyed" << std::endl;
}

void		Cat::makeSound(void) const
{
	std::cout << "Cat making his sound" << std::endl;
}

