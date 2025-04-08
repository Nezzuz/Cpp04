#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
	std::cout << "EXECUTING ices constructor" << std::endl;
}

Ice::Ice(const Ice& tocopy)
{
	*this = tocopy;
}

Ice& Ice::operator=(const Ice& takeattrsofthisone)
{
	if (this != &takeattrsofthisone)
	{
		this->_type = takeattrsofthisone._type;	
	}
	return (*this);	
}

Ice::~Ice()
{
	std::cout << "Destroying an ice object" << std::endl;
}

Ice*		Ice::clone(void) const
{
	return  (new Ice());
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()  << " *" <<  std::endl;
}
