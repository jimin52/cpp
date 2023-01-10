//
// Created by jimin on 2023/01/10.
//

#include "Data.hpp"
#include "serial.hpp"

int main(void) {

	Data* data1 = new Data(20);
	uintptr_t serialData = serialize(data1);
	Data* data2 = deserialize(serialData);
	

	std::cout << data1 << std::endl;
	std::cout << serialData << std::endl;
	std::cout << data2 << std::endl;

	data1->hiThisIsData();
	data2->hiThisIsData();
}