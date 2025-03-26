#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>

class WrongCat
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

#endif
