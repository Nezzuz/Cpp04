#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	/* const Animal* meta = new Animal(); */
	/* const Animal* j = new Dog(); */
	/* const Animal* i = new Cat(); */
	/* std::cout << j->getType() << " " << std::endl; */
	/* std::cout << i->getType() << " " << std::endl; */
	/* j->makeSound(); */
	/* i->makeSound(); //will output the cat sound! */
	/* meta->makeSound(); */
	/* delete meta; */
	/* delete j; */
	/* delete i; */

	/* std::cout << "Now let's try with wrong classes" << std::endl; */
	/* const WrongAnimal* wrongthing1 = new WrongAnimal(); */
	/* std::cout << "The type of the new wrong animal object is: " << wrongthing1->getType() << std::endl; */
	/* std::cout << "Now, it's gonna do it's sound... "; */
	/* wrongthing1->makeSound(); */
	/* std::cout << std::endl; */

	/* const WrongCat* wrongcat1 = new WrongCat(); */
	/* std::cout << "The type of the new wrong cat object is: " << wrongcat1->getType() << std::endl; */
	/* std::cout << "Now, it's gonna do it's sound... "; */
	/* wrongcat1->makeSound(); */
	/* std::cout << std::endl; */
	
	/* delete wrongthing1; */
	/* delete wrongcat1; */

	std::cout << "===============================================================================================================================================" << std::endl;

	/* int	n; */
	/* int	x; */

	/* n = 8; */
	/* const Animal* generic[n]; */
	/* x = 0; */
	/* while (x < (n / 2)) */
	/* { */
	/* 	generic[x] = new Cat; */
	/* 	x++; */
	/* } */
	/* while (x < n) */
	/* { */
	/* 	generic[x] = new Dog; */
	/* 	x++; */
	/* } */
	/* x = 0; */
	/* while (x < n) */
	/* { */
	/* 	delete generic[x]; */
	/* 	x++; */
	/* } */
	 
	Animal *test1 = new Dog();
	delete test1;
	/* That should not compile. Let's check it out */
	/* Animal *test2 = new Animal(); */
	/* delete test2; */

	WrongAnimal *test3 = new WrongCat();
	delete test3;
	/* Let's do the same in the WrongAnimal case */
	/* WrongAnimal *test4 = new WrongAnimal(); */
	/* delete test4; */
	
	return (0);
}
