/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:44:17 by macamarg          #+#    #+#             */
/*   Updated: 2025/05/20 10:44:18 by macamarg         ###   ########.fr       */
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
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
	private:
	int	value;
	static const int	bits = 8;
};

std::ostream&	operator<<(std::ostream& o, Fixed const &rSym);

#endif