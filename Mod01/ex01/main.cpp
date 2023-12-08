/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:11:13 by r                 #+#    #+#             */
/*   Updated: 2023/11/10 11:40:41 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	input;
	int			size;

	std::cout << "name" << std::endl;
	std::cin >> input;
	std::cout << "numb" << std::endl;
	std::cin >> size;
	Zombie	*z_horde = zombieHorde(size, input);
	for (int i = 0; i < size; i++)
		z_horde[i].announce();
	delete [] z_horde;
	return (0);
}
