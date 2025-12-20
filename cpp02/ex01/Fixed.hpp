#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed {
	private :
		int fixed_point_value;
		static const int fractional_bits = 8;
	public :
		Fixed();
		Fixed(const int _integer);
		Fixed(const float float_value);
		Fixed(const Fixed &original);
		Fixed &operator=(const Fixed &obj);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
#endif