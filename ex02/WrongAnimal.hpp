#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();	
		WrongAnimal(WrongAnimal& copy);
		WrongAnimal& operator=(WrongAnimal& copy);
		virtual ~WrongAnimal();
		virtual void		makeSound(void) const;
		virtual std::string	getType(void) const;
		/* virtual void		makeSound(void) const = 0; */
		/* virtual std::string	getType(void) const = 0; */
};

#endif
