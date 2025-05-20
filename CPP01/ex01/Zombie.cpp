/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:37:03 by macamarg          #+#    #+#             */
/*   Updated: 2025/04/14 14:37:04 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//constructor
Zombie::Zombie() {}

//destructor
//print a message with the name of the zombie for debugging purposes.
Zombie::~Zombie( void )
{
	std::cout << name << " has been destructed" << std::endl;
}
//announce themselves
void Zombie:: announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
//getter func
std::string Zombie::get_name( void )
{
	return(name);
}
//setter func
void Zombie::set_name(std::string given_name)
{
	name = given_name;
}