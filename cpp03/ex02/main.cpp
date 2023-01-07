//
// Created by jimin on 2022/12/06.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******   Default constructor test       ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;

		std::cout << "Constructor test:" << std::endl;
		FragTrap defaultFrag;
		std::cout << "" << std::endl;

		std::cout << "Function Test:" << std::endl;
		std::cout << "getName(): " << defaultFrag.getName() << std::endl;
		std::cout << "getEnergy(): " << defaultFrag.getEnergyPoint() << std::endl;
		std::cout << "getHitPoint(): " << defaultFrag.getHitPoint() << std::endl;
		std::cout << "getAttackDamage(): " << defaultFrag.getAttackDamange() << std::endl;
		std::cout << "print(): " << std::endl;
		defaultFrag.print("defaultFrag");
		std::cout << "attack(): " << std::endl;
		defaultFrag.attack("whoever");
		std::cout << "takeDamage():" << std::endl;
		defaultFrag.takeDamage(100);
		std::cout << "beRepaired():" << std::endl;
		defaultFrag.beRepaired(20);
		std::cout << "highFiveGuys():" << std::endl;
		defaultFrag.highFivesGuys();
		std::cout << "" << std::endl;

		std::cout << "" << std::endl;
	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******      Copy constructor test       ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;

		FragTrap a("source");
		FragTrap b(a);

		b.print("b");
		a.takeDamage(50);
		a.print("a");
		b.print("b");
	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******       Copy operator test         ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;

		FragTrap a("source");
		FragTrap b;

		a.print("a");
		b.print("b");
		b = a;
		b.print("b");

	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******   FragTrap attack repair test    ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;

		FragTrap f1("f1");
		FragTrap f2("f2");

		f1.attack(f2.getName());
		f2.takeDamage(f1.getAttackDamange());
		f1.print("c1");

		f1.beRepaired(50);
		f1.print("c1");

		f1.highFivesGuys();
	}
}
