/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:26:08 by macamarg          #+#    #+#             */
/*   Updated: 2025/05/12 13:14:19 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie
{
	public:

	Zombie();
	Zombie(std::string name);
	~Zombie( void );
	void announce( void );;
	std::string get_name( void );
	void set_name(std::string name);
	
	private:

	std::string	name;
};

Zombie* newZombie( std::string name );// Heap allocation (need to be deleted after use)
void randomChump( std::string name );// Stack allocation (only used within func scope)

#endif
