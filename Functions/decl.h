
#ifndef DECLARATIONS_H
#define DECLARATIONS_H
#include <tuple>
#include <functional>
std::tuple <int, int,char> get_input();
using ArithmeticFunction = std::function<int(int, int)>;
ArithmeticFunction getArithmeticFunction(char);
int add(int, int);
int sub(int, int);
int mult(int, int);
int divide(int, int);
#endif // !DECLARATIONS

