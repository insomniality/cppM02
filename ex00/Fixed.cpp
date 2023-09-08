#include "Fixed.hpp"
#include <iostream>

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";

	this->fixed_point = raw;
}

Fixed::Fixed() : fixed_point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other) //: fixed_point(other.fixed_point)//: fixed_point(0)
{
	std::cout << "Copy constructor called\n";
	fixed_point = other.getRawBits(); //or like this
}

Fixed& Fixed::operator=(const Fixed &other)
{
	if (this == &other)
		return (*this);	
	
	std::cout << "Copy assignment operator called\n";
	fixed_point = other.getRawBits();
	return (*this);
}


Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}


