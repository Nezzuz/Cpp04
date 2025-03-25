#include "Animal.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal
{
	public:
		Dog();	
		Dog(Dog& copy);
		Dog& operator=(Dog& copy);
		~Dog();
		virtual void		makeSound(void) const;
};

#endif
