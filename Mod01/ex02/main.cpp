/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:54:20 by r                 #+#    #+#             */
/*   Updated: 2023/11/10 12:33:24 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;
	
	std::cout << "String memory adresse : " << &str << std::endl;
	std::cout << "StringPTR memory adresse : " << stringPTR << std::endl;
	std::cout << "StringREF memory adresse : " << &stringREF << std::endl;

	std::cout << "String value : " << str << std::endl;
	std::cout << "StringPTR value : " << *stringPTR << std::endl;
	std::cout << "StringREF value : " << stringREF << std::endl;
	return (0);
}
