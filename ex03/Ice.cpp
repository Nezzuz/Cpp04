#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
	std::cout << "Constructor of Ice called" << std::endl;
}

Ice::Ice(const Ice& tocopy)
{
	this = &tocopy;
}

Ice& Ice::operator=(const Ice& takeattrsofthisone)
{
	if (*this != takeattrsofthisone)
	{
		this->_type = takeattrsofthisone._type;	
	}
	return (this);	
}

Ice::~Ice()
{
	std::cout << "Destroying an ice object" << std::endl;
}
