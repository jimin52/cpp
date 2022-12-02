//
// Created by jimin on 2022/12/02.
//

#ifndef CPP_HUMANB_H
#define CPP_HUMANB_H

# include "Weapon.h"

class HumanB {

private:

	Weapon	*myWeapon;
	std::string	name;

public:
	//constructor
	explicit HumanB(const std::string &name);

	//destructor
	virtual ~HumanB();

	void setWeapon(Weapon &myWeapon);

	void attack();
};


#endif //CPP_HUMANB_H
