
#include <iostream>
#include <vector>
#include <list>
#include <set>


#include "easyfind.hpp"

int main(void) {

	{
		std::vector<int> vector;

		vector.push_back(10);
		vector.push_back(20);
		vector.push_back(30);
		vector.push_back(40);
		vector.push_back(50);
		vector.push_back(60);
		vector.push_back(70);
		vector.push_back(80);
		vector.push_back(90);
		vector.push_back(100);

		std::vector<int>::const_iterator itr = easyfind(vector, 10);
		if (itr != vector.end())
			std::cout << *itr << std::endl;
		itr = easyfind(vector, 11);
		if (itr != vector.end())
			std::cout << *itr << std::endl;
	}
	{
		std::list<int> list;

		list.push_back(10);
		list.push_back(20);
		list.push_back(30);
		list.push_back(40);
		list.push_back(50);
		list.push_back(60);
		list.push_back(70);
		list.push_back(80);
		list.push_back(90);
		list.push_back(100);

		std::list<int>::const_iterator itr = easyfind(list, 15);
		if (itr != list.end())
			std::cout << *itr << std::endl;
		list.push_front(15);
		itr = easyfind(list, 15);
		if (itr != list.end())
			std::cout << *itr << std::endl;
	}
	{
		std::set<int> list;

		list.insert(10);
		list.insert(20);
		list.insert(30);
		list.insert(40);
		list.insert(50);
		list.insert(60);
		list.insert(70);
		list.insert(80);
		list.insert(90);
		list.insert(100);

		std::set<int>::const_iterator itr = easyfind(list, 15);
		if (itr != list.end())
			std::cout << *itr << std::endl;
		list.insert(15);
		itr = easyfind(list, 15);
		if (itr != list.end())
			std::cout << *itr << std::endl;
	}
}


