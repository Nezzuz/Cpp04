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
		std::cout << "First we have to delete the materias that were in " << this->_name << " to do a deep copy" << std::endl;
                while (i < 4)
                {   
                        if (this->_inventory[i] != NULL)
                                this->_inventory[i] = NULL;
                        i++;
                }   
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

Character::equip(AMateria* m)
{
	int	i;

	i = 0;
	while (this->_inventory[i] != NULL && i < 4)
		i++;
	if (i < 4)
		this->_inventory[i] = m;
	else
		std::cout << "All the slots are full, nothing else can be equiped" << std::endl;
}

Character::unequip(int idx)
{
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx] = NULL;
	else
		std::cout << "Nothing to unequip on that index" << std::endl;
}

Character::use(int idx, Character& target)
{
	if (this->_inventory[idx] != NULL)	
	{
		this->_inventory[idx]->use(target);
	}
}

