// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <tuple>
#include "decl.h"

int main()
{
	std::tuple user_inputs{ get_input ()};
	std::cout << std::get<0>(user_inputs) << std::get<2>(user_inputs) << std::get<1>(user_inputs) << " = " << getArithmeticFunction (std::get<2>(user_inputs))(std::get<0>(user_inputs), std::get<1>(user_inputs)) << std::endl;
}


