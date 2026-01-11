#include "Fixed.hpp"
int const Fixed::fractional_bits = 8;
Fixed::Fixed() : fixed_point_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}
Fixed& Fixed::operator=(const Fixed &obj)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &obj)
        this->fixed_point_value = obj.getRawBits();
    return *this;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_point_value;
}
void Fixed::setRawBits( int const raw )
{
    this->fixed_point_value = raw;
}