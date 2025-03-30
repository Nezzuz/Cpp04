#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
	std::cout << "EXECUTING cures constructor" << std::endl;
}

Cure::Cure(const Cure& tocopy)
{
	*this = tocopy;	
}

Cure& Cure::operator=(const Cure& takeattrsofthisone)
{
	if (this != &takeattrsofthisone)
	{
		this->_type = takeattrsofthisone._type;
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Destrying cure " << this->_type << std::endl;
}

Cure*		Cure::clone(void) const
{
	return  (new Cure());
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.name  << "'s wounds *" <<  std::endl;
}
