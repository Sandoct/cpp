/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpouzet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:21:44 by gpouzet           #+#    #+#             */
/*   Updated: 2023/10/28 16:22:06 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main (int argc, char **argv)
{
	int	i;

	i = 0;	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i++ < argc && argv[i])
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char) (std::toupper(argv[i][j]));
		std::cout << std::endl;
	}
}
