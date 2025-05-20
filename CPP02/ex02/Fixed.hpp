/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:47:30 by macamarg          #+#    #+#             */
/*   Updated: 2025/05/20 10:47:31 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* 

	Orthodox Canonical Form: explicitly declare and implement object
		Default constructor			{ClassName();}
		Copy constructor 			{ClassName(const ClassName& other);}
		Copy assignment operator	{ClassName& operator=(const ClassName& other);}
		Destructor					{~ClassName();}

*/

#ifndef _FIXED_HPP
#define _FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
	public:
	Fixed();
	Fixed(const int n);
	Fixed(const float f);
	Fixed(Fixed const &src);
	~Fixed();

	Fixed&	operator=(Fixed const &rSym);
	//Return by Value
	Fixed	operator+(Fixed const &rSym) const;
	Fixed	operator-(Fixed const &rSym) const;
	Fixed	operator/(Fixed const &rSym) const;
	Fixed	operator*(Fixed const &rSym) const;

	bool operator<(Fixed const &rSym) const;
	bool operator<=(Fixed const &rSym) const;
	bool operator>(Fixed const &rSym) const;
	bool operator>=(Fixed const &rSym) const;
	bool operator==(Fixed const &rSym) const;
	bool operator!=(Fixed const &rSym) const;

	Fixed&			operator++();
	Fixed			operator++(int);
	Fixed&			operator--();
	Fixed			operator--(int);

	float toFloat( void ) const;
	int toInt( void ) const;

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
	static Fixed &			min(Fixed &a, Fixed &b);
	static Fixed const &	min(Fixed const &a, Fixed const &b);

	static Fixed &			max(Fixed &a, Fixed &b);
	static Fixed const &	max(Fixed const &a, Fixed const &b);

	private:
	int	value;
	static const int	bits = 8;
};

std::ostream&	operator<<(std::ostream& o, Fixed const &rSym);

#endif