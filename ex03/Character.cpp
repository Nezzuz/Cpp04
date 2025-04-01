#include "Character.hpp"

Character::Character()
{
	this->_name = "generic guy";
	std::cout << "Characters constructor called" << std::endl;
}

Character::Character(const std::string name)
{
	this->_name = name;
	std::cout << "Characters constructor called" << std::endl;
}
Character::Character(const Character& copy)
{
	*this = copy;
}

Character& Character::operator=(const Character& copy)
{
	if (this != copy)
	{
		int	i;

		i = 0;
		while (i < 4)
		{
			this->_inventory[i] = copy._inventory[i];
			i++;
		}
		this->_name = copy._name;
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Characters destructor called" << std::endl;
}

