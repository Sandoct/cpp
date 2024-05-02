/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:53:23 by r                 #+#    #+#             */
/*   Updated: 2024/05/02 16:04:32 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	size_t	max = 6;
	// Array of int//
	Array<int>	decimal(max);
	std::cout << std::endl;
	std::cout << "Array content" << std::endl;
	for (size_t i = 0; i < max; i++)
	{
		decimal[i] = i;
		std::cout << decimal[i] << std::endl;
	}
	std::cout << "Array size : " << decimal.size() << std::endl;
	std::cout << std::endl;
	// Array out of bound//
	std::cout << "trying index + 1" << std::endl;
	try
	{
		decimal[max + 1];
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "trying negative index" << std::endl;
	try
	{
		decimal[-2];
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	// Array of char //
	std::cout << std::endl;
	Array<char>	character(max);
	std::cout << std::endl;
	std::cout << "Array content" << std::endl;
	for (size_t i = 0; i < max; i++)
	{
		character[i] = i + 97;
		std::cout << character[i] << std::endl;
	}
	std::cout << "Array size : " << character.size() << std::endl;
	// Array out of bound//
	std::cout << std::endl;
	std::cout << "trying index + 1" << std::endl;
	try
	{
		character[max + 1];
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "trying negative index" << std::endl;
	try
	{
		character[-2];
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
