#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<<"Default constructor called"<<std::endl;
	fixed_point_value = 0;
}

Fixed::Fixed(const int integer)
{
	std::cout<<"Int constructor called"<<std::endl;
	fixed_point_value = integer << 8;
}

Fixed::Fixed(const float float_value)
{
	std::cout<<"Float constructor called"<<std::endl;
	fixed_point_value = roundf(float_value * (1 << 8));
}

Fixed::Fixed(const Fixed &original)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = original;
}


Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if (this == &obj)
		return (*this);
	fixed_point_value = obj.fixed_point_value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return fixed_point_value;
}

void Fixed::setRawBits( int const raw )
{
	fixed_point_value = raw;
}

float Fixed::toFloat( void ) const
{
	float value = float (fixed_point_value) / (1 << fractional_bits);
	return (value);
}

int Fixed::toInt( void ) const
{
	return (int (fixed_point_value >> fractional_bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}
