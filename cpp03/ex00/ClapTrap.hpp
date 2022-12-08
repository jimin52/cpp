//
// Created by jimin on 2022/12/06.
//

#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
	//	private member
	std::string	name;
	unsigned int hitPoint;
	unsigned int energyPoint;
	unsigned int attackDamange;

	//	setter
	void setHitPoint(unsigned int hitPoint);
	void setEnergyPoint(unsigned int energyPoint);
	void setAttackDamange(unsigned int attackDamange);

	//	my function
	unsigned int getSafeDamageInput(unsigned int amount);

public:
	//	orthodox canonical form
	ClapTrap();
	explicit ClapTrap(const std::string &name);
	virtual ~ClapTrap();
	ClapTrap(ClapTrap const & src);
	ClapTrap & operator=(ClapTrap const & rhs);

	//	required function
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	//	getter
	const std::string &getName() const;
	unsigned int getHitPoint() const;
	unsigned int getEnergyPoint() const;
	unsigned int getAttackDamange() const;

	//	my function
	void print(const std::string & variableName) const;
};

#endif //CPP_CLAPTRAP_HPP
