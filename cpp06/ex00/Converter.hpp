
#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>

#define CHAR_FLAG 1
#define INT_FLAG 1 << 2
#define FLOAT_FLAG 1 << 3
#define DOUBLE_FLAG 1 << 4
#define ALL_FLAG 1 << 5

class Converter {

private:

	unsigned int	flag;
	std::string str;

	Converter();
	Converter(const Converter & src);
	Converter & operator=(Converter const & rhs);

	char	strToChar();
	int		strToInt();
	float	strToFloat();
	double	strToDouble();

public:

	Converter(std::string input);
	~Converter();

	void convertPrint();
};

#endif
