//
// Created by jimin on 2022/12/02.
//

#ifndef CPP_HUMANA_HPP
#define CPP_HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

private:

	const std::string	name;
	Weapon	&myWeapon;

public:
	//constructor
	explicit HumanA(const std::string & name, Weapon & weapon);
	//destructor
	virtual ~HumanA();

	void attack();
	void printweapon();

};


#endif //CPP_HUMANA_HPP
