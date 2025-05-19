/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:01:26 by macamarg          #+#    #+#             */
/*   Updated: 2025/05/12 10:54:55 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_string(int type)
{
	if (type == FIRST_NAME)
		return(first_name);
	else if (type == LAST_NAME)
			return(last_name);
	else if (type == NICK_NAME)
		return (nick_name);
	else if (type == PHONE_NUMBER)
		return (phone_number);
	else if (type == DARKEST_SECRET)
		return(darkest_secret);
	return (" ");
}


void	Contact::set_string(const std::string tmp, StringType type)
{
	if (type == FIRST_NAME)
		first_name = tmp;
	else if (type == LAST_NAME)
		last_name = tmp;
	else if (type == NICK_NAME)
		nick_name = tmp;
	else if (type == PHONE_NUMBER)
		phone_number= tmp;
	else if (type == DARKEST_SECRET)
		darkest_secret = tmp;
	return ;
}
//using substr to put the 9 first char of the string
void	put_contact(std::string str)
{
	size_t len;

	len = str.size();
	if (len > 10)
	{
		std::cout << str.substr (0,9);
		std::cout << ".";
	}
	else
	{
		while(len < 10)
		{
			std::cout << " ";//space to aline to the right
			len++;
		}
		std::cout << str;
	}
}

void	Contact::display(int index)
{
	std::cout << "         " << index << "|";
	put_contact(first_name);
	std::cout << "|";
	put_contact(last_name);
	std::cout << "|";
	put_contact(nick_name);
	std::cout << " " << std::endl;		
}


std::string get_fromuser(const std::string str)
{
	std::string	tmp;

	while (1)
	{
		std::cout << str << std::endl;
		std::cin >> tmp;
		if (tmp.size() > 0)
			break;
	}
	return(tmp);
}
//gets entree from user and sets to a new contact to further use
void Contact::get_new_contact(void)
{
	this->first_name = get_fromuser("enter contacts' first name");
	this->last_name = get_fromuser("enter contacts' last name");
	this->nick_name = get_fromuser("enter contacts' nickname");
	this->phone_number = get_fromuser("enter contacts' phonenumber");
	this->darkest_secret = get_fromuser("enter contacts' darkest secret");
}