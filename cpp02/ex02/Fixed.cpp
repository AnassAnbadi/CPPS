#include "Fixed.hpp"

int const Fixed::fractional_bits = 8;

Fixed::Fixed() : fixed_point_value(0)
{
}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    if (this != &obj)
        this->fixed_point_value = obj.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
}
int Fixed::getRawBits( void ) const
{
    return this->fixed_point_value;
}
void Fixed::setRawBits( int const raw )
{
    this->fixed_point_value = raw;
}
Fixed::Fixed(const int int_value)
{
    this->fixed_point_value = int_value << fractional_bits;
}
Fixed::Fixed(const float float_value)
{
    this->fixed_point_value = roundf(float_value * (1 << fractional_bits));
}
int Fixed::toInt( void ) const
{
    return this->fixed_point_value >> fractional_bits;
} 
float Fixed::toFloat( void ) const
{
    return (float)(this->fixed_point_value) / (1 << fractional_bits);
}
std::ostream& operator<<(std::ostream& os, const  Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed &obj) const
{
    return this->toFloat() > obj.toFloat();
}
bool Fixed::operator<(const Fixed &obj) const
{
    return this->getRawBits() < obj.getRawBits();
}
bool Fixed::operator>=(const Fixed &obj) const
{
    return this->getRawBits() >= obj.getRawBits();
}
bool Fixed::operator<=(const Fixed &obj) const
{
    return this->getRawBits() <= obj.getRawBits();
}
bool Fixed::operator==(const Fixed &obj) const
{
    return this->getRawBits() == obj.getRawBits();
}

bool Fixed::operator!=(const Fixed &obj) const
{
    return this->getRawBits() != obj.getRawBits();
}

Fixed Fixed::operator+(const Fixed &obj) const
{
    Fixed result;
    result.setRawBits(this->getRawBits() + obj.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed &obj) const
{
    Fixed result;
    result.setRawBits(this->getRawBits() - obj.getRawBits());
    return result;
}
Fixed Fixed::operator*(const Fixed &obj) const
{
    Fixed result;

    long temp = (long)this->getRawBits() * (long)obj.getRawBits();
    result.setRawBits((int)(temp >> fractional_bits));
    return result;
}
Fixed Fixed::operator/(const Fixed &obj) const
{
    Fixed result;
    long temp = ((long)this->getRawBits() << fractional_bits) / (long)obj.getRawBits();
    result.setRawBits((int)temp);
    return result;
}
Fixed& Fixed::operator++()
{
    this->fixed_point_value++;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->fixed_point_value++;
    return temp;
}
Fixed& Fixed::operator--()
{
    this->fixed_point_value--;
    return *this;
}
Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    this->fixed_point_value--;
    return temp;
}
Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}
const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}


