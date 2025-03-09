#include "Animal.hpp"

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Dog : public Animal
{
	public:
		Dog();	
		Dog(Dog& copy);
		Dog& operator=(Dog& copy);
		~Dog();
		void		makeSound(void);
		std::string	getType(Dog& copy);
};

#endif
