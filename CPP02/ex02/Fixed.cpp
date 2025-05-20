/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:47:28 by macamarg          #+#    #+#             */
/*   Updated: 2025/05/20 10:47:29 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//------------Constructors
//start fixed with valeu = 0
Fixed::Fixed() : value(0)
{
}

//Shifts the integer n left by bits (likely 8, the number of fractional bits).
Fixed::Fixed(const int n)
{
	this->value = n << bits;
}

//Fixed hold 8 bits precision, so in order to hold 1*2^⁻8 we have to multiply by 2^8
Fixed::Fixed(const float f)
{
	this->value = roundf(f * (1 << bits));
}

//equivalent to call copy operator
Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed::~Fixed()
{
}

//------------Operators
Fixed&	Fixed::operator=(Fixed const &rSym)
{
	this->value = rSym.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(Fixed const &rSym) const
{
	return Fixed(this->toFloat() + rSym.toFloat());
}

Fixed	Fixed::operator-(Fixed const &rSym) const
{
	return Fixed(this->toFloat() - rSym.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rSym) const
{
	return Fixed(this->toFloat() / rSym.toFloat());
}

Fixed	Fixed::operator*(Fixed const &rSym) const
{
	
	return Fixed(this->toFloat() * rSym.toFloat());
}

//------------Logic Operation
//getRawBits to compare 
bool Fixed::operator<(Fixed const &rSym) const
{
	if (this->getRawBits() < rSym.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(Fixed const &rSym) const
{
	if (this->getRawBits() <= rSym.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>(Fixed const &rSym) const
{
	if (this->getRawBits() > rSym.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(Fixed const &rSym) const
{
	if (this->getRawBits() >= rSym.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(Fixed const &rSym) const
{
	if (this->getRawBits() == rSym.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(Fixed const &rSym) const
{
	if (this->getRawBits() != rSym.getRawBits())
		return true;
	return false;
}

//------------Increment/decrement
Fixed&			Fixed::operator++()
{
	this->value++;
	return *this;
}

Fixed			Fixed::operator++(int)
{
	Fixed	tmp(*this);
	
	operator++();
	return tmp;
}

Fixed&			Fixed::operator--()
{
	this->value--;
	return *this;
}

Fixed			Fixed::operator--(int)
{
	Fixed	tmp(*this);
	
	operator--();
	return tmp;
}

//------------Max/Min
Fixed &			Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed const &	Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &			Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

Fixed const &	Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return a;
	return b;
}


//------------convertion
float Fixed::toFloat( void ) const
{
	return (float)this->value / (float)(1 << bits);
}

int Fixed::toInt( void ) const
{
	return this->value >> bits;
}

//------------Getter and Setters
//getter
int Fixed::getRawBits( void ) const
{
	return this->value;
}

//setter
void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

//When << is called to a Fixed calls this function that converts to float and mekes it printable
std::ostream&	operator<<(std::ostream& o, Fixed const &rSym)
{
	o << rSym.toFloat();
	return o;
}

