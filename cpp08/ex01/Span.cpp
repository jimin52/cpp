
#include <iostream>
#include <stdexcept>

#include "Span.hpp"

Span::Span(): _size(0){}

Span::~Span() {}

Span::Span(Span const & src){
	*this = src;
}

Span & Span::operator=(const Span & rhs) {

	if (this != &rhs) {
		_set.clear();
		_size = rhs._size;
		std::multiset<int>::iterator iterBegin = rhs._set.begin();
		std::multiset<int>::iterator iterEnd = rhs._set.end();
		for(; iterBegin != iterEnd; ++iterBegin) { 
			_set.insert( *iterBegin );
		}
    }
	return *this;
}

Span::Span(unsigned int N): _size(N){}

void Span::addNumber(unsigned int N) {

	if (_size == _set.size())
		throw std::out_of_range("Span is full!!!");
	_set.insert(N);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {

    if (_size < static_cast<unsigned int>(std::distance(begin, end)))
        throw std::out_of_range("Span is full!!!");
	for( ; begin != end; ++begin) {
		addNumber(*begin);
	}
}

void Span::addRandomNumber(unsigned int amount, unsigned int maxValue) {

	size_t cycleNumber;
	if (_size > amount + _set.size())
		cycleNumber = amount + _set.size();
	else
		cycleNumber = _size - _set.size();

	for (size_t i = 0; i < cycleNumber; i++) {
		int n;
		std::srand(reinterpret_cast<uintptr_t>(&n) * (i + 1));
		addNumber(std::rand() % maxValue);
	}
}

unsigned int Span::shortestSpan() {

	unsigned int smallestDifference = UINT_MAX;
	unsigned int difference;

	if (_set.size() < 2)
		throw std::exception();
	std::multiset<int>::iterator curr = _set.begin();
	std::multiset<int>::iterator next = curr;
	next++;
	for ( ; next != _set.end(); curr++, next++) {
		difference = *next - *curr;
		if (smallestDifference > difference) {
			smallestDifference = difference;
		}
	}
	return smallestDifference;
}

unsigned int Span::longestSpan() {

	if (_set.size() < 2)
		throw std::exception();
	unsigned int begin = *(_set.begin());
	unsigned int end = *(_set.rbegin());
	return (end - begin);
}

void Span::printAll(){

    std::cout << "Span size: " << _set.size() << '\n';
	std::multiset<int>::iterator begin = _set.begin();
	std::multiset<int>::iterator end = _set.end();
	for ( ; begin != end; begin++ ) {
    	std::cout << *begin << " ";
    }
	std::cout << std::endl;
}

