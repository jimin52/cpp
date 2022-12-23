//
// Created by jimin on 2022/12/05.
//

#include "Harl.hpp"

Harl::Harl() {
	level[0] = "DEBUG";
	level[1] = "INFO";
	level[2] = "WARNING";
	level[3] = "ERROR";
	std::cout << "Harl constructed" << std::endl;
}

Harl::~Harl() {
	std::cout << "Harl destructed" << std::endl;
}

void Harl::debug(){
	std::cout << "[DUBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
};

void  Harl::info(){
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};

void Harl::warning(){
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
};

void Harl::error(){
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

};

int	Harl::get_level(std::string input) {
	for (int i = 0; i < 4; i++) {
		if (level[i] == input)
			return i;
	}
	return -1;
}

void Harl::complain(std::string input) {
	static void (Harl::*func[5]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int inputLevel;
	inputLevel = get_level(input);
	if (inputLevel == -1)
		std::cerr << "Invalid Command" << std::endl;
	else
		(this->*func[inputLevel])();
}

void 	Harl::complainFilter(std::string input){

	int level = get_level(input);
	switch (level){
		case 0:
			debug();
			std::cout << std::endl;
		case 1:
			info();
			std::cout << std::endl;
		case 2:
			warning();
			std::cout << std::endl;
		case 3:
			error();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
