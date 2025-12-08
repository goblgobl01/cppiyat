#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<<"Default constructor called"<<std::endl;
	integer = 0;
}

Fixed::Fixed(const Fixed &original)
{
	std::cout<<"Copy constructor called"<<std::endl;
	integer = original.integer;
}

Fixed Fixed::operator=(const Fixed &obj)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if (this == &obj)
		return (obj);
	integer = obj.integer;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return integer;
}

void Fixed::setRawBits( int const raw )
{
	integer = raw;
}