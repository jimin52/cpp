//
// Created by jimin on 2022/12/06.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******   Default constructor test       ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;

		std::cout << "Constructor test:" << std::endl;
		ScavTrap defaultScav;
		std::cout << "" << std::endl;

		std::cout << "Function Test:" << std::endl;
		std::cout << "print(): " << std::endl;
		defaultScav.print("defaultScav");
		std::cout << "attack(): " << std::endl;
		defaultScav.attack("whoever");
		std::cout << "gateGuard():" << std::endl;
		defaultScav.guardGate();
		std::cout << "" << std::endl;

	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******      Copy constructor test       ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;

		ScavTrap a("source");
		ScavTrap b(a);

		a.print("a");
		b.print("b");
		a.takeDamage(50);
		a.print("a");
		b.print("b");
	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******      Assign operator test        ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;

		ScavTrap a("source");
		ScavTrap b;

		a.print("a");
		b.print("b");
		b = a;
		a.print("a");
		b.print("b");

	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******   ScavTrap attack repair test    ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;

		ScavTrap s1("s1");
		ClapTrap c2("c1");

		s1.attack(c2.getName());
		c2.takeDamage(s1.getAttackDamange());
		s1.print("s1");

		s1.beRepaired(50);
		s1.print("s1");
	}
}
