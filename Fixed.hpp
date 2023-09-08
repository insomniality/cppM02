#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					fixed_point;
		static const int	fractional_bits = 8; // always 8
	public:
		Fixed();
		Fixed(const Fixed &other);
		
		~Fixed();

};

#endif