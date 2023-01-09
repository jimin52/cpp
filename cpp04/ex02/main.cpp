//
// Created by jimin on 2022/12/11.
//

#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"

int main() {
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******         Animal make test         ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;

		Animal a1;
		a1.makeSound();

	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******         AAnimal make test         ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;
		//AAnimal aa1;
		//aa1.makeSound();
	}
	{
		std::cout << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******           Subject test           ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << std::endl;
		const AAnimal *i = new Dog();
		const AAnimal *j = new Cat();
		delete i;//should not create a leak
		delete j;
		system("leaks main");
	}
	{
		std::cout << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******           Subject test2          ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << std::endl;
		AAnimal* animalArr[4];
		animalArr[0] = new Dog();
		animalArr[1] = new Dog();
		animalArr[2] = new Cat();
		animalArr[3] = new Cat();
		std::cout << std::endl;
		delete animalArr[0];
		delete animalArr[1];
		delete animalArr[2];
		delete animalArr[3];
		system("leaks main");
	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******         Deep  copy test          ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;

		Dog *i = new Dog();
		Dog *j = new Dog();

		*i = *j;

		delete i;
		delete j;
		system("leaks main");
	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******         Cat Dog test             ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;

//		Cat c;
//		Dog d1(c);
//		Cog d2 = c;

	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******           Brain test             ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;

		AAnimal *a = new Dog();
		a->makeSound();
		system("leaks main");
	}
	return 0;
}
