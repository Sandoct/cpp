/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:12:57 by r                 #+#    #+#             */
/*   Updated: 2024/05/17 19:36:59 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <string>
# include <map>

// Class definition
class BitcoinExchange
{
	private:
		std::map<std::string, float> _data;
 
	public:
	// Constructor 
		BitcoinExchange(); 
		BitcoinExchange( const BitcoinExchange &rhs); 
		~BitcoinExchange(); 
		BitcoinExchange& operator=( const BitcoinExchange &rhs); 
		int	HandleData(const std::string &filename);
		void	MatchingValue();
}; 
 
#endif
