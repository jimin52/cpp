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
		std::cout << "getName(): " << defaultScav.getName() << std::endl;
		std::cout << "getEnergy(): " << defaultScav.getEnergyPoint() << std::endl;
		std::cout << "getHitPoint(): " << defaultScav.getHitPoint() << std::endl;
		std::cout << "getAttackDamage(): " << defaultScav.getAttackDamange() << std::endl;
		std::cout << "print(): " << std::endl;
		defaultScav.print("defaultScav");
		std::cout << "attack(): " << std::endl;
		defaultScav.attack("whoever");
		std::cout << "takeDamage():" << std::endl;
		defaultScav.takeDamage(100);
		std::cout << "beRepaired():" << std::endl;
		defaultScav.beRepaired(20);
		std::cout << "gateGuard():" << std::endl;
		defaultScav.guardGate();
		std::cout << "" << std::endl;

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

		ScavTrap a("source");
		ScavTrap b;

		a.print("a");
		b.print("b");
		b = a;
		b.print("b");

	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******   ScavTrap attack repair test    ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;

		ScavTrap c1("scav1");
		ScavTrap c2("scav2");

		c1.attack(c2.getName());
		c2.takeDamage(c1.getAttackDamange());
		c1.print("c1");

		c1.beRepaired(50);
		c1.print("c1");
	}
}