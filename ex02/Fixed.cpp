#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called\n";
	
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called\n";

	this->fixed_point = raw;
}

Fixed::Fixed() : fixed_point(0)
{
	// std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other) //: fixed_point(other.fixed_point)//: fixed_point(0)
{
	// std::cout << "Copy constructor called\n";
	fixed_point = other.getRawBits(); //or like this
}

Fixed& Fixed::operator=(const Fixed &other)
{
	if (this == &other)
		return (*this);	
	
	// std::cout << "Copy assignment operator called\n";
	fixed_point = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}

// ------------------------------------------------

Fixed::Fixed(const int number)
{
	// std::cout << "Int constructor called" << std::endl;
	fixed_point = number * (1 << fractional_bits);
}

Fixed::Fixed(const float floating_point_fnumber)
{
	// std::cout << "Float constructor called" << std::endl;
	fixed_point = static_cast<int>(roundf(floating_point_fnumber * (1 << fractional_bits))); 
}

float	Fixed::toFloat( void ) const
{
	return ((static_cast<float>(fixed_point) / static_cast<float>(1 << fractional_bits)));
}

int	Fixed::toInt( void ) const
{
	return (static_cast<int>(fixed_point >> fractional_bits));
}

std::ostream& operator << (std::ostream &stream, const Fixed &other)
{
	std::cout << other.toFloat();
	return (stream);
}

// ------------------------------------------------

bool Fixed::operator<(const Fixed& rhs)
{
	return (this->getRawBits() < rhs.getRawBits());
}
bool Fixed::operator>(const Fixed& rhs)
{
	return (this->getRawBits() > rhs.getRawBits());
}
bool Fixed::operator<=(const Fixed& rhs)
{
	return (this->getRawBits() <= rhs.getRawBits());
}
bool Fixed::operator>=(const Fixed& rhs)
{
	return (this->getRawBits() >= rhs.getRawBits());
}
bool Fixed::operator==(const Fixed& rhs)
{
	return (this->getRawBits() == rhs.getRawBits());
}
bool Fixed::operator!=(const Fixed& rhs)
{
	return (this->getRawBits() != rhs.getRawBits());
}


Fixed Fixed::operator+(const Fixed& rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed& rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed& rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed& rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

const Fixed&	Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	Fixed l = lhs;
	Fixed r = rhs;
	return (l >= r ? rhs : lhs);
}

const Fixed&	Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	Fixed l = lhs;
	Fixed r = rhs;
	return (l >= r ? lhs : rhs);
}

Fixed&	Fixed::min(Fixed &lhs, Fixed &rhs)
{
	return (lhs >= rhs ? rhs : lhs);
}

Fixed&	Fixed::max(Fixed &lhs, Fixed &rhs)
{
	return (lhs >= rhs ? lhs : rhs);
}

Fixed& Fixed::operator++()
{
	fixed_point++;
	return (*this);
}

Fixed& Fixed::operator--()
{
	fixed_point--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++(*this);
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	--(*this);
	return (temp);
}