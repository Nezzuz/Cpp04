#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "A brain has been created" << std::endl;
}

Brain::Brain(Brain& copy)
{
	*this = copy;
}

Brain& Brain::operator=(Brain& copy)
{
	if (this != &copy)
	{
		/* this->type = copy.type; */
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "A brain has been destroyed" << std::endl;
}

