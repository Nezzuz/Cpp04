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
	return (*this);
}

~MateriaSource::MateriaSource()
{
	std::cout << "MateriaSources destructor called" << std::endl;
}
