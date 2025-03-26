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
	int	i;

	if (this != &copy)
	{
		i = 0;
		while (i < 100)
		{
			this->ideas[i] = copy.ideas[i];
			i++;
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "A brain has been destroyed" << std::endl;
}

