#include "AMateria.hpp"

AMateria::AMateria()
{
	this->_type = "amateria";
	std::cout << "EXECUTING amaterias constructor" << std::endl;
}

AMateria::AMateria(const AMateria& other)
{
	*this = other;	
}

AMateria::AMateria(const std::string& type)
{
	this->_type = type;
}

AMateria& AMateria::operator=(const AMateria& copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << this->_type << " destructor called" << std::endl;
}

std::string const& 		AMateria::getType(void) const
{
	return (this->_type);
}

void				AMateria::use(ICharacter& target)
{
	(void)target;
	std::cerr << "This will never be seen because an abstract class is not istantiable and ice and cure classes will modify this method" << std::endl;
	return;
}
