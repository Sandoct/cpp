/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:52:04 by r                 #+#    #+#             */
/*   Updated: 2024/04/29 15:30:05 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP
# include "iostream"
# include <iostream>
# include <iomanip>
# include <string>
# include <climits>
# include <limits.h>
# include <float.h>
# include <cstdlib>

class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
	
	public:
		~ScalarConverter();
		ScalarConverter	&operator=(const ScalarConverter &src);

		static void	convert(const std::string literal);
};

#endif
