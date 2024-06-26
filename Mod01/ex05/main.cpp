/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:11:07 by r                 #+#    #+#             */
/*   Updated: 2024/01/23 15:38:12 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	std::string	input;
	Harl		harl;

	std::cout << "Command : DEBUG, INFO, WARNING, ERROR, EXIT." << std::endl;
	while (1)
	{
		std::cout << "level : ";
		std::cin >> input;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break;
		}
		if (!input.compare("EXIT"))
			break ;
		harl.complain(input);
	}
	return (0);
}
