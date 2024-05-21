/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:38:25 by r                 #+#    #+#             */
/*   Updated: 2024/05/21 12:05:25 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Error not enought arguments" << std::endl;
		return (1);
	}
	try
	{
		RPN	calculator(argv[1]);
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
