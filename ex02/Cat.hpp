#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{
	private:
		Brain* _CatBrain;

	public:
		Cat();
		Cat(Cat& copy);
		Cat& operator=(Cat& copy);
		~Cat();
		void		makeSound(void) const;
		std::string	getType(void) const;
};

#endif
