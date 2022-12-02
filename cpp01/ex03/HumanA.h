//
// Created by jimin on 2022/12/02.
//

#ifndef CPP_HUMANA_H
#define CPP_HUMANA_H

# include <iostream>
# include "Weapon.h"

class HumanA {

private:

	Weapon	&myWeapon;
	std::string	name;

public:
	//constructor
	explicit HumanA(const std::string &name, Weapon &weapon);
	//destructor
	virtual ~HumanA();

	void attack();

};


#endif //CPP_HUMANA_H
