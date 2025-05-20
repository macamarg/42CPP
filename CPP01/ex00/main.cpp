/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:24:56 by macamarg          #+#    #+#             */
/*   Updated: 2025/04/14 14:34:36 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie	*myzombie;
	
	myzombie = newZombie("New-ton");//allocates memory for myzombie
	myzombie->announce();//myzombie announces
	std::cout << "<far far away> ";
	myzombie->announce();//myzombie announces
	randomChump( "Chump" );//chump is called and dies
	std::cout << "<far> ";
	myzombie->announce();
	std::cout << "<not so far> ";
	myzombie->announce();
	std::cout << "<closer> ";
	myzombie->announce();
	std::cout << "<really close> ";
	myzombie->announce();
	std::cout << "<meat grinder noise> " << std::endl;
	delete myzombie;//New-ton dies
	return (0);
}
