/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:18:29 by r                 #+#    #+#             */
/*   Updated: 2024/05/21 11:15:55 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>

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

// Utilities fonction

static bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

static bool isValidDate(int year, int month, int day)
{
    if (year < 0 || year > 9999 || month < 1 || month > 12 || day < 1)
        return (false);

    int daysInMonth[] = { 31, (isLeapYear(year) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    return (day <= daysInMonth[month - 1]);
}

static bool isDigits(const std::string &str)
{
    return (str.find_first_not_of("0123456789") == std::string::npos);
}

static bool isDouble(const std::string &str)
{
    if (str.empty()) 
        return false;
    if (str.find_first_not_of("0123456789.") != std::string::npos) 
        return false;
    size_t dot_pos = str.find('.');
    if (dot_pos != std::string::npos) 
        if (dot_pos == 0 || dot_pos == str.size() - 1 || str.find('.') != str.rfind('.')) 
            return false;
    if (str.find_first_of("0123456789") == std::string::npos) 
        return false;
 
    return true;
}

static bool	CheckDate(std::string date)
{
	std::string::size_type del1 = date.find('-');
	std::string::size_type del2 = date.rfind('-');

	if (del1 == std::string::npos || del1 == del2)
		return (false);

	std::string year_str = date.substr(0, del1);
	std::string month_str = date.substr(del1 + 1, del2 - del1 - 1);
	std::string day_str = date.substr(del2 + 1);

	if (!isDigits(year_str) || !isDigits(month_str) || !isDigits(day_str))
		return (false);
	return (isValidDate(atoi(year_str.c_str()), atoi(month_str.c_str()), atoi(day_str.c_str())));
}

// function
int	BitcoinExchange::HandleData(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::string::size_type delimiter_pos = line.find(',');
		if (delimiter_pos == std::string::npos)
		{
			std::cerr << "Error: Invalid format in database => " << line << std::endl;
			return (1);
		}
		std::string date = line.substr(0, delimiter_pos);
		if (!CheckDate(date))
		{
			std::cerr << "Error: Invalid date in database => " << line << std::endl;
			return (1);
		}
		std::string rate_str = line.substr(delimiter_pos + 1);
		if (rate_str.size() < 1 || !isDouble(rate_str))
		{
			std::cerr << "Error: Invalid rate format in database => " << line << std::endl;
			return (1);
		}
		_data[date] = atof(rate_str.c_str());
	}
	return (0);
}

void	BitcoinExchange::MatchingValue(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::string::size_type delimiter_pos = line.find('|');
		if (delimiter_pos == std::string::npos)
		{
			std::cerr << "Error: Expected '|' delimiter in line => " << line << std::endl;
			continue ;
		}
		std::string date = line.substr(0, delimiter_pos - 1);
		if (!CheckDate(date))
		{
			std::cerr << "Error: Invalid date in line => " << line << std::endl;
			continue ;
		}
		std::string value_str = line.substr(delimiter_pos + 2);
		if (value_str.size() < 1 || !isDouble(value_str))
		{
			std::cerr << "Error: Invalid value format in line => " << line << std::endl;
			continue ;
		}
		double	value = atof(value_str.c_str());
		if (value > 10000)
		{
			std::cerr << "Error: too large a numbe in line => " << line << std::endl;
			continue ;
		}
		std::map<std::string, float>::iterator it = _data.lower_bound(date);
		double exchangeRate;
		if (it->first != date && it != _data.begin()) {
			--it;
		}

		if (it != _data.end()) {
			exchangeRate = it->second;
		} else if (!_data.empty()) {
			exchangeRate = it->second;
		}else
		{
			std::cerr << "Error: No exchange rate available for date => " << date << std::endl;
			continue;
		}

		std::cout << date << " => " << value << " = " << value * exchangeRate << std::endl;
	}
}
