//
// Created by jimin on 2022/12/02.
//

#ifndef CPP_HUMANB_HPP
#define CPP_HUMANB_HPP

# include "Weapon.hpp"

class HumanB {

private:

	std::string	name;
	Weapon	*myWeapon;

public:
	//constructor
	explicit HumanB(const std::string &name);

	//destructor
	virtual ~HumanB();

	void setWeapon(Weapon &myWeapon);

	void attack();
};


#endif //CPP_HUMANB_HPP
