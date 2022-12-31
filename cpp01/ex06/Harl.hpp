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
	void	complain(std::string input);
	void 	complainFilter(std::string input);

private:
	std::string	level[4];
	void (Harl::*func[4])(void);
	void	debug();
	void	info();
	void	warning();
	void	error();
	int		get_level(std::string input);
};

#endif //CPP_HARL_HPP
