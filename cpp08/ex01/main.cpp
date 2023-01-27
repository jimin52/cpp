
#include <iostream>

#include "Span.hpp"

int main()
{
	{
		int arr[] = {7, 10, 20, 0, 100, 3};
		std::vector<int> _vec(arr, arr + sizeof(arr) / sizeof(int));

		std::vector<int>::iterator start = _vec.begin();
		std::vector<int>::iterator end = _vec.end();

		Span sp = Span(6);
		sp.addNumber(start, end);

		sp.printAll();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(10000);
		sp.addRandomNumber(100, 1000000000);

		sp.printAll();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(1);
		try {
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cerr << "error!" << std::endl;
		}
	}

    return 0;
}
