#include "Animal.hpp"
#include "Brain.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal
{
	private:
		Brain* _DogBrain;

	public:
		Dog();	
		Dog(Dog& copy);
		Dog& operator=(Dog& copy);
		~Dog();
		void		makeSound(void) const;
		std::string	getType(void) const;
};

#endif
