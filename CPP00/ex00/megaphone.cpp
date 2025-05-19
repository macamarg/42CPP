/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <macamarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:00:40 by macamarg          #+#    #+#             */
/*   Updated: 2025/04/14 11:00:53 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>
#include <stdio.h>

//using namespace std;//declaring std as the global context, so I dont have to call  std::cout << "STUFF";

int	main(int argc, char **argv)
{
	int i;
	if (argc == 1)
	{
		 std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<  std::endl;
	}
	else
	{
		i = 0;
		while (++i < argc)
		{
			for (int j = 0; argv[i][j]; j++)
				 std::cout << (char)toupper(argv[i][j]);
			if (i < (argc -1))//not the last argument
				 std::cout << " ";//space between args
		}
		std::cout << std::endl;
	}
	return (0);
}
