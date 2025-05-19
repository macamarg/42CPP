/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:33:45 by macamarg          #+#    #+#             */
/*   Updated: 2025/04/14 11:33:46 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

//system("clear"); ==> clear @terminal
int	main(void)
{
	system("clear");
	PhoneBook	my_pb;
	std::string	command;
	
	while (1)
	{
		std::cout << "Enter command - ADD (1), SEARCH (2), EXIT(3)" << std::endl;
		std::cin >> command;
		if (command == "ADD" || command == "1")
			my_pb.add();
		else if (command == "SEARCH" || command == "2")
			my_pb.search();
		else if (command == "EXIT"  || command == "3")
			break ;
		else
			std::cout << "invalid command" << std::endl;
	}
	system("clear");
}