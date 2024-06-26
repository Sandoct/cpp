/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:11:13 by r                 #+#    #+#             */
/*   Updated: 2024/01/31 17:51:04 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	input;

	std::cout << "name" << std::endl;
	std::cin >> input;
	Zombie	*z_heap = newZombie(input);
	z_heap->announce();
	delete z_heap;

	std::cout << "name" << std::endl;
	std::cin >> input;
	randomChump(input);
	return (0);
}
