/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:58:23 by r                 #+#    #+#             */
/*   Updated: 2024/05/20 20:46:51 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cerr << "Invalid number of arguments." << std::endl;
		return (1);
	}
	BitcoinExchange btc;
	if (btc.HandleData("data.csv"))
		return (1);
	btc.MatchingValue(argv[1]);
	return (0);
}
