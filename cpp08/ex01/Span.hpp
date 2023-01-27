#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

class Span {

private:

	std::multiset<int> _set;
	size_t	_size;

public:

	Span();
	virtual ~Span();
	Span(Span const & src);
	Span & operator=(Span const & rhs);

	Span(unsigned int N);

	void addNumber(unsigned int N);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	void addRandomNumber(unsigned int amount, unsigned int maxValue);
	unsigned int shortestSpan();
	unsigned int longestSpan();

	void printAll();

};

#endif
