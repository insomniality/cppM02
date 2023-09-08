#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					fixed_point;
		static const int	fractional_bits = 8; // always 8
	public:
	 	int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int number);
		Fixed(const float floating_point_fnumber);
		Fixed &operator = (const Fixed &other);
		~Fixed();

};

std::ostream &operator << (std::ostream &stream, const Fixed &other);

#endif