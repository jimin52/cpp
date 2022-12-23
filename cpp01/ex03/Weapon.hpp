//
// Created by jimin on 2022/12/02.
//

#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP

# include <iostream>

class Weapon {

private:
	std::string type;

public:

	//constructor
	explicit Weapon(const std::string & type);

	//destructor
	virtual ~Weapon();

	//getter
	const std::string & getType() const;

	//setter
	void setType(const std::string & type);
};


#endif //CPP_WEAPON_HPP
