/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:25:59 by macamarg          #+#    #+#             */
/*   Updated: 2025/04/14 13:26:00 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//create a new zombie with stack - dont return a zombie to be use afterwards
void randomChump( std::string name )
{
	Zombie  newz;

	newz.set_name(name);
	newz.announce();
	//zombie is destroid automatically
}