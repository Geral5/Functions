#include "decl.h"
#include <tuple>
#include <iostream>
std::tuple <int,int,char> get_input() {
	int num1{}, num2{};
	char symbol{};
	bool correct{ false };
	do {

		std::cout << "This program takes 2 integers and operates them using a mathematical expression chosen by the user" << std::endl;
		std::cout << "Integer #1: ";
		std::cin >> num1;
		std::cout << "Integer #2: ";
		std::cin >> num2;
		std::cout << "Mathematical operation '+', '-', '*', '/': ";
		std::cin >> symbol;

		switch (symbol)
		{
			case '+': 
				{
					correct = true;
					break;
				
				}
			case '-':
				{
					correct = true;
					break;

				}
			case '*':
				{
					correct = true;
					break;

				}
			case '/':
				{
					if (num2 == 0) {
						std::cout << "Division by zero" << std::endl;
						//correct = false;
						break;
					}
					correct = true;
					break;

				}
			/*default:
				correct = false;*/
		}
	} while (!correct);
	return { num1,num2,symbol };

}

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mult(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }
ArithmeticFunction getArithmeticFunction(char symbol) {
	switch (symbol)
	{
	default:
	case '+':
		return add;
	case '-':
		return sub;
	case '*':
		return mult;
	case '/':
		return divide;
	}

}