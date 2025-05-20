/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:56:37 by macamarg          #+#    #+#             */
/*   Updated: 2025/05/20 09:56:38 by macamarg         ###   ########.fr       */
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


class Fixed
{
	public:
	Fixed();
	Fixed(Fixed const &src);
	~Fixed();
	Fixed&	operator=(Fixed const &rSym);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
	private:
	int	value;
	static const int	bits = 8;
};

#endif