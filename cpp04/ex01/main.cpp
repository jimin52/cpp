//
// Created by jimin on 2022/12/11.
//

#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******           Subject test           ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;
		const Animal *i = new Dog();
		const Animal *j = new Cat();
		delete i;//should not create a leak
		delete j;
	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******           Subject test2          ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;
		Animal* animalArr[4];
		animalArr[0] = new Dog();
		animalArr[1] = new Dog();
		animalArr[2] = new Cat();
		animalArr[3] = new Cat();
		delete animalArr[0];
		delete animalArr[1];
		delete animalArr[2];
		delete animalArr[3];
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
	}
	return 0;
}