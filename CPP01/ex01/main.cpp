/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:36:09 by macamarg          #+#    #+#             */
/*   Updated: 2025/05/12 14:03:00 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 5;
	Zombie *horde;

	const std::string names[] = {"Zombie0", "Zombie1", "Zombie2","Zombie3", "Zombie4"};
	//create all N at once
	horde = zombieHorde(N, "Horde_of_Zombies");
	//announce	
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	//rename individuos + announce
	for (int i = 0; i < N; i++)
	{
		(*(horde + i)).set_name(names[i]);
	}
	//call announce
	for (int i = 0; i < N; i++)
	{
		(*(horde + i)).announce();
	}
	delete[] horde;//delete all zombies at once
	return (0);
}