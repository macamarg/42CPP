/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:37:11 by macamarg          #+#    #+#             */
/*   Updated: 2025/05/12 13:57:29 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	//default-constructed
	Zombie  *horde = new Zombie[N];// Allocate memory on the heap for a array of N zombies

	//then initialized with the name.
	for (int i = 0; i < N; i++)
	{
		horde[i].set_name(name);//set name
	}
	return(horde);//return pointer
}