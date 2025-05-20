/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:37:07 by macamarg          #+#    #+#             */
/*   Updated: 2025/04/14 14:37:08 by macamarg         ###   ########.fr       */
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
	~Zombie( void );
	void announce( void );
	std::string get_name( void );
	void set_name(std::string name);
	
	private:

	std::string	name;
};

Zombie* zombieHorde( int N, std::string name );//N Zombie objects in a single allocatio

#endif