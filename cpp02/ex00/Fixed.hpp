#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"
class Fixed {
	private :
		int integer;
		static const int constant = 8;
	public :
		Fixed();
		Fixed(const Fixed &original);
		Fixed operator=(const Fixed &obj);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif