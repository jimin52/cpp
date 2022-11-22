#include <iostream>

static void	cout_string(char *arg) {
	std::string str = arg;
	for (unsigned int i = 0; i < str.size(); i++)
		std::cout << (unsigned char) (toupper(str[i]));
}

int	main(int argc, char* argv[]) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++) {
		cout_string(argv[i]);
	}
	std::cout << std::endl;
	return 0;
}
