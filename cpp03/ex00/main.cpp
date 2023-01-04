//
// Created by jimin on 2022/12/06.
//

#include "ClapTrap.hpp"

int main( void ) {
	{
		std::cout << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******   Default constructor test       ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << std::endl;

		std::cout << "Constructor test:" << std::endl;
		ClapTrap defaultClap;
		std::cout << std::endl;

		std::cout << "Function Test:" << std::endl;

		std::cout << "print(): " << std::endl;
		defaultClap.print("defaultClap");

		std::cout << "attack(): " << std::endl;
		defaultClap.attack("whoever");

		std::cout << "takeDamage():" << std::endl;
		defaultClap.takeDamage(100);

		std::cout << "beRepaired():" << std::endl;
		defaultClap.beRepaired(20);

		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******      Copy constructor test       ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << std::endl;

		ClapTrap a("source");
		ClapTrap b(a);
		a.print("a");
		b.print("b");
	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******       Copy operator test         ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;

		ClapTrap a("source");
		ClapTrap b;

		a.print("a");
		b.print("b");
		b = a;
		b.print("b");


	}
	{
		std::cout << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******   ClapTrap attack repaire test   ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << std::endl;

		ClapTrap c1("clap1");
		ClapTrap c2("clap2");
		c1.print("c1");
		c2.print("c2");

		std::cout << std::endl;

		c1.attack(c2.getName());
		c2.takeDamage(c1.getAttackDamange());
		c1.print("c1");

		std::cout << std::endl;

		c1.beRepaired(50);
		c1.print("c1");

		c2.print("c2");
		c2 = c1;
		c2.print("c2");

	}
}
