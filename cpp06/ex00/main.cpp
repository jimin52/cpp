//
// Created by jimin on 2022/12/22.
//

#include <iostream>

#include "Converter.hpp"

int main( int argc, char* argv[] ) {
   if (argc != 2) {
	   std::cerr << "invalid input" << std::endl;
	   return 1;
   }
   
   Converter converter(argv[1]);
   converter.convertPrint();

   return 0;
}
