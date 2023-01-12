#include <iostream>

#include "Array.hpp"


void	leakCheck(){
	system("leaks main");
}

int main(){
	Array<std::string> arr(5);

	std::cout << arr.size() << std::endl;

	arr[0] = std::string("hi");
	arr[1] = std::string("cpp07");
	arr[2] = std::string("good to");
	arr[3] = std::string("see you");
	arr[4] = std::string(":)");

	std::cout << arr[0] << std::endl;
	std::cout << arr[1] << std::endl;
	std::cout << arr[2] << std::endl;
	std::cout << arr[3] << std::endl;
	std::cout << arr[4] << std::endl;


	Array<std::string> arr_2(arr);

	arr[0] = std::string("see");
	arr[1] = std::string("you");
	arr[2] = std::string("again");
	arr[3] = std::string("never");
	arr[4] = std::string(":)");

	std::cout << arr_2[0] << std::endl;
	std::cout << arr_2[1] << std::endl;
	std::cout << arr_2[2] << std::endl;
	std::cout << arr_2[3] << std::endl;
	std::cout << arr_2[4] << std::endl;

	std::cout << std::endl;

	std::cout << arr[0] << std::endl;
	std::cout << arr[1] << std::endl;
	std::cout << arr[2] << std::endl;
	std::cout << arr[3] << std::endl;
	std::cout << arr[4] << std::endl;

	std::cout << std::endl;
 	try {
 		Array<int> arr;
 		std::cout << arr[1];
 	//	std::cout << arr[-1];
 	}
 	catch (std::exception & e){
 		std::cout << e.what() << std::endl;
 	}

	atexit(leakCheck);
 }
