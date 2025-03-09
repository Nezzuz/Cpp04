#include <iostream>

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();	
		Animal(Animal& copy);
		Animal& operator=(Animal& copy);
		~Animal();
		virtual void		makeSound(void);
		virtual std::string	getType(void);
};

#endif
