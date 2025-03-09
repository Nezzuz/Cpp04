#include "Animal.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat& copy);
		Cat& operator=(Cat& copy);
		~Cat();
		void		makeSound(void);
		std::string	getType(Cat& copy);
};

#endif
