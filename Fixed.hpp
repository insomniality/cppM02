#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					fixed_point;
		static const int	fractional_bits; // always 8
	public:
		Fixed();
		Fixed(Fixed &other);
		
		~Fixed();

};

#endif