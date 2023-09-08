#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					fixed_point;
		static const int	fractional_bits = 8; // always 8
	public:
	 	int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		Fixed();
		Fixed(const Fixed &other);
		Fixed &operator = (const Fixed &other); //hishi xi reference a return anum
		~Fixed();

};

#endif