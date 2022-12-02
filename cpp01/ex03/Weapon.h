//
// Created by jimin on 2022/12/02.
//

#ifndef CPP_WEAPON_H
#define CPP_WEAPON_H

# include <iostream>

class Weapon {

private:
	std::string type;

public:

	//getter
	const std::string &getType() const;

	//setter
	void setType(const std::string &type);

	//constructor
	explicit Weapon(const std::string &type);

	//destructor
	virtual ~Weapon();

};


#endif //CPP_WEAPON_H
