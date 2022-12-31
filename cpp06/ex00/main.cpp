//
// Created by jimin on 2022/12/22.
//

#include <iostream>
#include <sstream>

int main( int argc, char* argv[] ) {
   if (argc != 2) {
	   std::cerr << "invalid input" << std::endl;
	   return 1;
   }
   std::stringstream stream(argv[1]);
   
   try {
	   float b;
	   if (!(stream >> b))
		   std::cerr << "error!" << std::endl;
	   std::cout << b << std::endl;
   } catch (std::exception e) {
	   std::cout << e.what() << std::endl;
   }

   std::string str;
   stream >> str;
   std::cout << str << std::endl;

   //	1. input 을 적절한 타입으로 변경
   //	input 타입을 적절한 타입으로 형변환


   //	2. 변경된 자료형을 각 자료형으로 변경

   //	0
   //	0.01f
   //	nan
   //	0.0
   //

   return 0;
}