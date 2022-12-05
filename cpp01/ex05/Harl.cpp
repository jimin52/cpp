//
// Created by jimin on 2022/12/05.
//

#include "Harl.hpp"

Harl::Harl() {
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

void Harl::complain(std::string input) {
	static void (Harl::*func[5]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	switch (input.front()) {
		case 'D':
			if (input == "DEBUG")
				(this->*func[0])();
			else
				std::cerr << "Invalid Command" << std::endl;
			break;
		case 'I':
			if (input == "INFO")
				(this->*func[1])();
			else
				std::cerr << "Invalid Command" << std::endl;
			break;
		case 'W':
			if (input == "WARNING")
				(this->*func[2])();
			else
				std::cerr << "Invalid Command" << std::endl;
			break;
		case 'E':
			if (input == "ERROR")
				(this->*func[3])();
			else
				std::cerr << "Invalid Command" << std::endl;
			break;
		default:
			std::cerr << "Invalid Command" << std::endl;
			break;
	}
}
