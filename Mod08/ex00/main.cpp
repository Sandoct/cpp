/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpouzet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:53:20 by gpouzet           #+#    #+#             */
/*   Updated: 2024/05/03 16:48:33 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <time.h>

int	main()
{
	srand (time(NULL));
	std::vector<int> test(15);
	for (int i = 0; i < 15; i++)
		test[i] = rand() % 10;
	std::cout << "coutontainer : {";
	for (int i = 0; i < 15; i++)
		std::cout << " " << test[i];
	std::cout << "}" << std::endl;
	std::cout << "Start reshearch for 7" << std::endl;
	try
	{
		easyfind(test, 7);
	}
	catch (NoFoundException& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
