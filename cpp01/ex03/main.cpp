//
// Created by jimin on 2022/12/02.
//

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	{
		{
			std::cout << std::endl;
			std::cout <<"/***************************************/" << std::endl;
			std::cout <<"/******     HumanA test          *******/" << std::endl;
			std::cout <<"/***************************************/" << std::endl;
			std::cout << std::endl;
			Weapon club = Weapon("crude spiked club");
			HumanA bob("Bob", club);
			bob.attack();
			club.setType("some other type of club");
			bob.attack();
		}
		{
			std::cout << std::endl;
			std::cout <<"/***************************************/" << std::endl;
			std::cout <<"/******     HumanB test          *******/" << std::endl;
			std::cout <<"/***************************************/" << std::endl;
			std::cout << std::endl;
			Weapon club = Weapon("crude spiked club");
			HumanB jim("Jim");
			jim.setWeapon(club);
			jim.attack();
			club.setType("some other type of club");
			jim.attack();
		}
		{
			std::cout << std::endl;
			std::cout <<"/***************************************/" << std::endl;
			std::cout <<"/******     HumanB test2         *******/" << std::endl;
			std::cout <<"/***************************************/" << std::endl;
			std::cout << std::endl;
			Weapon club = Weapon("crude spiked club");
			HumanB jim("Jim");
			jim.attack();
			jim.setWeapon(club);
			jim.attack();
			club.setType("some other type of club");
			jim.attack();
		}
		{
			std::cout << std::endl;
			std::cout <<"/***************************************/" << std::endl;
			std::cout <<"/******     explicit test        *******/" << std::endl;
			std::cout <<"/***************************************/" << std::endl;
			std::cout << std::endl;

		}
	}
	return 0; 
}
