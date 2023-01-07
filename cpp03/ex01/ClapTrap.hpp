//
// Created by jimin on 2022/12/06.
//

#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
	//	protected member
	std::string	name;
	unsigned int hitPoint;
	unsigned int energyPoint;
	unsigned int attackDamange;

	//	my function
	unsigned int getSafeDamageInput(unsigned int amount) const;

public:
	//	orthodox canonical form
	ClapTrap();
	virtual ~ClapTrap();
	ClapTrap(ClapTrap const & src);
	ClapTrap & operator=(ClapTrap const & rhs);

	//	constructor
	explicit ClapTrap(const std::string &name);

	//	required function
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	//	getter
	std::string getName() const;
	unsigned int getHitPoint() const;
	unsigned int getEnergyPoint() const;
	unsigned int getAttackDamange() const;

	//	my function
	virtual void print(const std::string & variableName) const;

};

#endif //CPP_CLAPTRAP_HPP
