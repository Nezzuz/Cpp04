#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSources constructor called" << std::endl;
}


MateriaSource::MateriaSource(const MateriaSource& copy)
{
	*this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy)
{
	if (this != copy)
	{
		int	i;

		i = 0;
		while (i < 4)
		{
			if (this->_inventory[i] != NULL)
				this->_inventory[i] = NULL;
			i++;
		}
		i = 0;
		while (i < 4)
		{
			this->_inventory[i] = copy._inventory[i];
			i++;
		}
	}
	return (*this);
}

~MateriaSource::MateriaSource()
{
	std::cout << "MateriaSources destructor called" << std::endl;
}

void		MateriaSource::learnMateria(AMateria*)
{

}

AMateria*	MateriaSource::createMateria(std::string const& type)
{

}

