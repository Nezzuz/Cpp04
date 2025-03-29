#pragma once

#include <iostream>
class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(const AMateria& other);
		AMateria& operator=(const AMateria& copy);
		virtual ~AMateria();
		AMateria(const std::string& type);
		const std::string&	getType(void);
		virtual	AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};
