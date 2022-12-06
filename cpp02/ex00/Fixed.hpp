//
// Created by jimin on 2022/12/05.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP


class Fixed {

private:
	int	rawBits;
	static const int	bitNumber = 8;

public:
	explicit Fixed();

	virtual ~Fixed();

	Fixed(const Fixed & src);

	Fixed & operator=(const Fixed &src);

	int getRawBits() const;

	void setRawBits( int const raw );

};


#endif //CPP_FIXED_HPP