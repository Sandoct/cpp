/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:07:31 by r                 #+#    #+#             */
/*   Updated: 2024/04/29 14:24:46 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}

ScalarConverter::ScalarConverter( const ScalarConverter &src )
{
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	*this = src;
}

ScalarConverter	&ScalarConverter::operator=( const ScalarConverter &src )
{
	std::cout << "ScalarConverter assignement operator called" << std::endl;
	(void)src;
	return (*this);
}

static void		convert_min() {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << INT_MIN << std::endl;
	std::cout << "float: " << __FLT_MIN__ << std::endl;
	std::cout << "double: " << __DBL_MIN__ << std::endl;
}

static void		convert_max() {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << INT_MAX << std::endl;
	std::cout << "float: " << __FLT_MAX__ << std::endl;
	std::cout << "double: " << __DBL_MAX__ << std::endl;
}

static void		convert_nan() {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

static void		convert_error() {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

static void	convert_char(std::string conv)
{
	std::cout << "char: " << "'" << conv[0] << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(conv[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(conv[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(conv[0]) << ".0" << std::endl;
}

static void	convert_int(int conv)
{
	if (conv < 0 || conv > 127)
		std::cout << "char: impossible" << std::endl;
	else if (conv < 32 || conv == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << "'" << static_cast<char>(conv) << "'" << std::endl;
	std::cout << "int: " << conv << std::endl;
	std::cout << "float: " << static_cast<float>(conv) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(conv) << ".0" << std::endl;
}

static void	convert_float(float conv)
{
	if (conv < 0 || conv > 127)
		std::cout << "char: impossible" << std::endl;
	else if (conv < 32 || conv == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << "'" << static_cast<char>(conv) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(conv) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << conv << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(conv) << std::endl;
}

static void	convert_double(double conv)
{
	if (conv < 0 || conv > 127)
		std::cout << "char: impossible" << std::endl;
	else if (conv < 32 || conv == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << "'" << static_cast<char>(conv) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(conv) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(conv) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << conv << std::endl;
}

static int	check_literal(std::string numb,unsigned int size)
{
	unsigned int	i = -1;

	while (++i < size)
	{
		if (i == 0 && numb[i] == '-')
			i++;
		if (!std::isdigit(numb[i]) && numb[i] != '.')
			return (0);
	}
	return (1);
}

void	ScalarConverter::convert(const std::string literal)
{
	if (literal == "-inf" || literal == "-inff")
		convert_min();
	else if (literal == "+inf" || literal == "+inff")
		convert_max();
	else if (literal == "nan" || literal == "nanf")
		convert_nan();
	else if (std::isprint(literal[0]) && !std::isdigit(literal[0]) \
			&& literal[0] != '-' && literal.length() == 1)
		convert_char(literal);
	else if (literal[literal.size() - 1] == 'f' && check_literal(literal, literal.size() - 1))
		convert_float(atof(literal.c_str()));
	else if (literal.find('.') != std::string::npos && check_literal(literal, literal.size()))
		convert_double(atof(literal.c_str()));
	else if (check_literal(literal, literal.size()))
		convert_int(atoi(literal.c_str()));
	else
		convert_error();
}
