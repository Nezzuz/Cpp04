#pragma once

#include "AMateria.hpp"
class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& tocopy);
		Ice& operator= (const Ice& takeattrsofthisone);	
		~Ice();
		Ice*	clone(void) const;
		void	use(ICharacter& target);
};
