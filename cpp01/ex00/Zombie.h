//
// Created by jimin on 2022/12/02.
//

#ifndef CPP_ZOMBIE_H
#define CPP_ZOMBIE_H

#include <iostream>

class Zombie {

public:

	explicit Zombie( std::string );
	~Zombie();

	void Announce();

private:

	std::string	name;

};

Zombie*	newZombie(std::string name);
void randomChump(std::string name);

#endif //CPP_ZOMBIE_H
