//
// Created by jimin on 2022/12/05.
//

#ifndef CPP_HARL_HPP
#define CPP_HARL_HPP

#include <iostream>

class Harl {
public:
	Harl();
	virtual ~Harl();
	void	debug();
	void	info();
	void	warning();
	void	error();
	void	complain(std::string input);
	int		get_level(std::string input);

private:
	std::string	level[4];
};


#endif //CPP_HARL_HPP
