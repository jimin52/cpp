#include "iter.hpp"

int main(void) {
	std::string str[2] = {"aaaaaaa", "bbbbbbb"};
	std::string str2[2] = {"aaaaaaa", "bbbbbbb"};
	int a[5] = {1, 2, 3, 4, 5};
	const int b[5] = {1, 2, 3, 4, 5};

	std::cout << "str array print test" << '\n';

	::iter(str, 2, print1);
	::iter(str2, 2, print1);
	std::cout << std::endl;

	std::cout << "int const array print test" << '\n';
	::iter(a, 5, print1);
	std::cout << std::endl;
	::iter(b, 5, print1);
	std::cout << std::endl;

	std::cout << "int rvalue print test" << '\n';
	int inta = 6;
	::print1(inta);
	::print1(6);
	std::cout << std::endl;

	return 0;
}
