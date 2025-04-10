#pragma once

#include "AMateria.hpp"
class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& tocopy);
		Cure& operator=(const Cure& takeattrsofthisone);
		~Cure();
		Cure*	clone(void) const;
		void	use(ICharacter& target);
};
