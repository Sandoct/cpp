/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:11:13 by r                 #+#    #+#             */
/*   Updated: 2024/01/17 16:49:14 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	input;
	int			size;

	std::cout << "name" << std::endl;
	std::cin >> input;
	if (std::cin.eof())
		return (0);
	std::cout << "numb" << std::endl;
	std::cin >> size;
	if (std::cin.eof())
		return (0);
	Zombie	*z_horde = zombieHorde(size, input);
	for (int i = 0; i < size; i++)
		z_horde[i].announce();
	delete [] z_horde;
	return (0);
}
