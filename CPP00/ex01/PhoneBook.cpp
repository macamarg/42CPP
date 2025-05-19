/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:33:54 by macamarg          #+#    #+#             */
/*   Updated: 2025/05/12 10:55:06 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

/*

On program start-up, the phonebook is empty and the user is prompted to enter one
of three commands. The program only accepts ADD, SEARCH and EXIT.

ADD: save a new contact

SEARCH: display a specific contact

EXIT: The program quits and the contacts are lost forever!

Once a command has been correctly executed, the program waits for another one. It
stops when the user inputs EXIT

*/

//constructor
PhoneBook::PhoneBook() : num(0)
{
}

//destructor
PhoneBook::~PhoneBook(){
	
}

// Setter for num JUST because num is private 
// but it only supose to count contacts
void	PhoneBook::set_num(int new_num)
{
	num = new_num;
}

// Getter for num because num is private
int		PhoneBook::get_num(void)
{
	return(num);
}

//new contact at the first available place 
void	PhoneBook::add(void)
{
	int			pos;

	pos = num % 8;
	contacts[pos].get_new_contact();
	num++;
}

//if num == 0 displays one clean line
//else displays the filled table from oldest
// num [1,8] just display contact
// num [9, 00[ starts displaying at (pos + 8 + i)
void	PhoneBook::search(void)
{
	std::string 	temp;
	std::string		tmp;
	unsigned int	pos;
	int index;
	
	pos = num % 8;
	std::cout << "     Index|   1stName|  LastName|  Nickname" << std::endl;
	if (num == 0)
		contacts[0].display(0);
	for (unsigned int i = 0; (i < 8 && i < num); i++)
	{
		if (num > 8)
			contacts[(pos + 8 + i) % 8].display(i);
		else
			contacts[i].display(i);
	}
	std::cout << "enter contacts' index" << std::endl;
	std::cin >> tmp;
	index = stoi(tmp);
	if (index > 8 || index < 0)
		std::cout << "Invalid index" << std::endl;
	else if (num > 8)
		index = ((pos + 8 + index) % 8);
	std::cout << "FIRST_NAME: " << contacts[index].get_string(0) << std::endl;
	std::cout << "LAST_NAME: " << contacts[index].get_string(1) << std::endl;
	std::cout << "NICK_NAME: " << contacts[index].get_string(2) << std::endl;
	std::cout << "PHONE_NUMBER: " << contacts[index].get_string(3) << std::endl;
	std::cout << "DARKEST_SECRET: " << contacts[index].get_string(4) << std::endl;
}
