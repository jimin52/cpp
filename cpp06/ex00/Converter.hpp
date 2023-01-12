#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <sstream>

#define ERR_EMPTY_FLAG		1 
#define ERR_NOT_NUMBER_FLAG 1 << 1
#define	NAN_FLAG			1 << 2
#define	INF_FLAG			1 << 3

class Converter {

private:

	unsigned int	flag;
	std::string str;
	double	casted_double;

	std::string charString;
	std::string intString;
	std::string floatString;
	std::string doubleString;


	Converter();
	Converter(const Converter & src);
	Converter & operator=(Converter const & rhs);

	void	convert();
	void	convertInit();
	void	strToChar();
	void	strToInt();
	void	strToFloat();
	void	strToDouble();

public:

	Converter(std::string input);
	~Converter();

	void Print();
};

#endif
