/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:15:09 by r                 #+#    #+#             */
/*   Updated: 2024/03/11 22:16:53 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
// Constructor initializes attributes to 0 by default 

Data::Data()
{
	std::cout << "Data constructor called" << std::endl;
}

Data::Data( const Data& rhs)
{
	std::cout << "Data copy constructor called" << std::endl;
	*this = rhs;
}

Data::~Data()
{
	std::cout << "Data destructor called" << std::endl;
}

Data	&Data::operator=( const Data& rhs )
{
	(void)rhs;
	return *this;
}

// Getters 
 
// Setters 
 
// Output
	void Data::output()
{}
 
