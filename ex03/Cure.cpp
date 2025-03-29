#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
	std::cout << "EXECUTING==> Cure default constructor" << std::endl;
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
