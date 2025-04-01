#pragma once

#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
		MateriaSource& operator=(const MateriaSource& copy);
		~MateriaSource();
		void		learnMateriaSource(AMateriaSource*);
		MateriaSource*	createMateriaSource(std::string const& type);
}
