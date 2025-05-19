/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:33:57 by macamarg          #+#    #+#             */
/*   Updated: 2025/05/12 10:23:12 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
#include "Contact.hpp"


/*

two classes:
•PhoneBook
◦It has an array of contacts.
◦It can store a maximum of 8 contacts. If the user tries to add a 9th contact,
replace the oldest one by the new one.
◦Please note that dynamic allocation is forbidden.
•Contact
◦Stands for a phonebook contact.

*/



//can store a maximum of 8 contacts 
class PhoneBook
{	
	private:
	Contact contacts[8];
	unsigned int		num;

	public:
	PhoneBook();
	~PhoneBook();
	void	add(void);
	void	search(void);
	void	set_num(int new_num);
	int		get_num(void);
};

#endif
