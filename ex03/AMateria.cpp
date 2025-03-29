#include "AMateria.hpp"

AMateria::AMateria()
{
	this->_type = amateria;
	std::cout << "EXECUTING amaterias constructor" << std::endl;
}

AMateria::AMateria(const AMateria& other)
{
	this = &other;	
}

AMateria::AMateria(const std::string type)
{
	this->_type = type;
}

AMateria& operator=(const AMateria& copy)
{
	if (*this != copy)
	{
		this->_type = copy._type;
	}
	return (this);
}

AMateria::~AMateria()
{
	std::cout << this->_type << " destructor called" << std::endl;
}

std::string 		AMateria::getType(void)
{
	return (this->_type);
}

/* virtual AMateria*       AMateria::clone() const */
/* { */
/* 	return (this); */
/* } */

/* virtual void		AMateria::use(ICharacter& target); */
/* { */
/* 	return; */
/* } */
