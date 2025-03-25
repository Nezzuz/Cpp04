#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "wrong cat";
	std::cout << "Wrong cat animal object created" << std::endl;
}

WrongCat::WrongCat(WrongCat& copy)
{
	*this = copy;
}

WrongCat& WrongCat::operator=(WrongCat& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat object destroyed" << std::endl;
}

void		WrongCat::makeSound(void) const
{
	std::cout << "!meowwwww..." << std::endl;
}

std::string	WrongCat::getType(void) const
{
	if (!this->type.empty())
		return (this->type);
	else
		return (NULL);
}

