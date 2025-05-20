/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:58:21 by macamarg          #+#    #+#             */
/*   Updated: 2025/05/12 14:54:16 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <string>

int main(void)
{
	std::string var = "HI THIS IS BRAIN";
	std::string *stringPTR = &var;
	std::string &stringREF = var;//string declaration (and the ref of this string is the same as &var)

	//The memory address
	std::cout << "The memory address of the string variable " << &var << std::endl;
	//std::cout << "The memory address of stringPTR  " << &stringPTR << std::endl;
	std::cout << "The memory address held by stringPTR      " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF      " << &stringREF << std::endl;
	//The value
	std::cout << "The value of the string variable  " << var << std::endl;
	std::cout << "The value pointed to by stringPTR " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF " << stringREF << std::endl;
	return(0);
}
/*
	When pointers are initialized, what is initialized is the 
	address they point to (i.e., stringPTR), never the value 
	being pointed (var) or the address (&var)
*/