/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:26:05 by macamarg          #+#    #+#             */
/*   Updated: 2025/05/12 13:15:39 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//constructor
Zombie::Zombie() {}

Zombie::Zombie(std::string name): name(name)
{}

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


/* //create a new zombie allocating memory and returns it to be used after
//must delete it in the main func
Zombie* newZombie( std::string name )
{
	Zombie  *newz = new Zombie();// Allocate memory on the heap

	newz->set_name(name);//set name
	return(newz);//return pointer
}
//create a new zombie with stack - dont return a zombie to be use afterwards
void randomChump( std::string name )
{
	Zombie  newz;

	newz.set_name(name);
	newz.announce();
	//zombie is destroid automatically
} */