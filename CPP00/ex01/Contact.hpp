/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:01:37 by macamarg          #+#    #+#             */
/*   Updated: 2025/05/12 10:26:21 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>



class Contact
{
	public:
	enum StringType {
		FIRST_NAME,
		LAST_NAME,
		NICK_NAME,
		PHONE_NUMBER,
		DARKEST_SECRET
	};

	private:
	std::string		first_name;
	std::string		last_name;
	std::string		nick_name;
	std::string		phone_number;
	std::string		darkest_secret;
	
	public:
	void	display(int index);
	void	get_new_contact(void);
	std::string get_string(int type);
	void	set_string(const std::string tmp, StringType type);
};

#endif
