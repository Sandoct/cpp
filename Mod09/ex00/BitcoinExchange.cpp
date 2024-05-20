/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:18:29 by r                 #+#    #+#             */
/*   Updated: 2024/05/17 19:37:09 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <regex>
// Constructor initializes attributes to 0 by default 

BitcoinExchange::BitcoinExchange()
{
	std::cout << "BitcoinExchange constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& rhs)
{
	std::cout << "BitcoinExchange copy constructor called" << std::endl;
	*this = rhs;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "BitcoinExchange destructor called" << std::endl;
}

BitcoinExchange	&BitcoinExchange::operator=( const BitcoinExchange& rhs )
{
	(void)rhs;
	return *this;
}

int	BitcoinExchange::HandleData(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	std::string line;
	std::getline(file, line);
	regex str_expr ("(\d{4}-(0[13578]|1[02])-(0[1-9]|[12][0-9]|3[01])\b|\b\d{4}-
		(0[469]|11)-(0[1-9]|[12][0-9]|30)\b|\b\d{4}-02-(0[1-9]|1[0-9]|2[0-9])),
			(1000|[0-9]{1,3}(\.\d+)?)")
	while (std::getline(file, line))
	{
		if (!regex_match(line, str_expr))
		{
			std::cerr << "Error :" << line <<std::endl;
			return (1);
		}
	}
}
