#include <iostream>

int main(int argc, char* argv[]) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	std::string str = argv[1];
	for (unsigned int i = 0; i < str.size(); i++)
		std::cout << (unsigned char) (toupper(str[i]));
	return 0;
}
