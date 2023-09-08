#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : fixed_point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other) : fixed_point(other.fixed_point)//: fixed_point(0)
{
	// fixed_point = other.fixed_point; //or like this
	std::cout << "Copy constructor called\n";
}


Fixed::~Fixed()
{
	// fixed_point = other.fixed_point; //or like this
	std::cout << "Copy constructor called\n";
}


