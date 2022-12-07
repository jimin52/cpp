//
// Created by jimin on 2022/12/06.
//

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap c1("clap");
	ClapTrap c2("trap");

	c1.attack(c2.getName());
	c2.takeDamage(c1.getAttackDamange());
	c1.print("c1");

	c1.beRepaired(50);
	c1.print("c1");

	c2.print("c2");
	c2 = c1;
	c2.print("c2");

	ClapTrap c3(c2);
	c3.print("c3");
}