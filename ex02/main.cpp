#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	// #include <exception>
	// try
	// {
	// 	int a = 6;
	// 	int b = 0;
	// 	int c = a/b;
	// 	(void)c;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// // Fixed a;

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}