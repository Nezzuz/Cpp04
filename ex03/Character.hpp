#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
class Character : public ICharacter
{
	private:
		AMateria*		_inventory[4];
		std::string		_name;
	public:
		Character();
		Character(const std::string name);
		Character(const Character& copy);
		Character& operator=(const Character& copy);
		~Character();
		std::string	const& getName(void) const;
		void		equip(AMateria* m);
		void		unequip(int idx);
		void		use(int idx, ICharacter& target);
};
