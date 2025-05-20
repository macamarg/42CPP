/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:25:57 by macamarg          #+#    #+#             */
/*   Updated: 2025/05/12 13:17:55 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Using the standard constructor
// Zombie* newZombie( std::string name )
// {
// 	Zombie  *newz = new Zombie();// Allocate memory on the heap

// 	newz->set_name(name);//set name
// 	return(newz);//return pointer
// }


// Using the constructor that takes a string and initializes
// the name.
Zombie* newZombie( std::string name )
{
	Zombie  *newz = new Zombie(name);// Allocate memory on the heap
	
	return(newz);//return pointer
}