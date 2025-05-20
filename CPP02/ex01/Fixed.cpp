/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:44:13 by macamarg          #+#    #+#             */
/*   Updated: 2025/05/20 10:44:14 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//start fixed with valeu = 0
Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

//Shifts the integer n left by bits (likely 8, the number of fractional bits).
Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = n << bits;
}

//Fixed hold 8 bits precision, so in order to hold 1*2^⁻8 we have to multiply by 2^8
Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(f * (1 << bits));
}

//equivalent to call copy operator
Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const &rSym)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->value = rSym.getRawBits();
	return *this;
}

float Fixed::toFloat( void ) const
{
	return (float)this->value / (float)(1 << bits);
}

int Fixed::toInt( void ) const
{
	return this->value >> bits;
}

//getter
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

//setter
void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

//When << ś called to a Fixed calls this function that converts to float and mekes it printable
//right-hand Symbol (rSym)
std::ostream&	operator<<(std::ostream& o, Fixed const &rSym)
{
	o << rSym.toFloat();
	return o;
}

