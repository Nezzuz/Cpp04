#pragma once
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongCat();	
		WrongCat(WrongCat& copy);
		WrongCat& operator=(WrongCat& copy);
		virtual ~WrongCat();
		virtual void		makeSound(void) const;
		virtual std::string	getType(void) const;
};
