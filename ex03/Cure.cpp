#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
	std::cout << "EXECUTING cures constructor" << std::endl;
}

Cure::Cure(const Cure& tocopy)
{
	this = &tocopy;	
}

Cure& Cure::operator=(const Cure& takeattrsofthisone)
{
	if (*this != tocopy)
	{
		this->_type = tocopy.type;
	}
	return (this);
}

Cure::~Cure()
{
	std::cout << "Destrying cure " << this->_type << std::endl;
}

std::string	Cure::getType(void)
{
	return (this->_type);
}

virtual Cure*	Cure::clone(void) const
{
	return  (new Cure());
}

virtual void	Cure::use(ICharacter& target);
{
	std::cout << "* heals " << target.name  << "'s wounds *" <<  std::endl;
}
