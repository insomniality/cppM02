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

		bool operator<(const Fixed&);
		bool operator>(const Fixed&);
		bool operator<=(const Fixed&);
		bool operator>=(const Fixed&);
		bool operator==(const Fixed&);
		bool operator!=(const Fixed&);

		Fixed operator+(const Fixed&);
		Fixed operator-(const Fixed&);
		Fixed operator*(const Fixed&);
		Fixed operator/(const Fixed&);

		const static Fixed &min(const Fixed &, const Fixed &);
		const static Fixed &max(const Fixed &, const Fixed &);

		static Fixed &min(Fixed &, Fixed &);
		static Fixed &max(Fixed &, Fixed &);

		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
};

std::ostream &operator << (std::ostream &stream, const Fixed &other);

#endif