/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:07:14 by r                 #+#    #+#             */
/*   Updated: 2023/11/23 13:40:58 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animals.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal constuctor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destuctor called" << std::endl;
}

Animal::Animal( const Animal &src )
{
	std::cout << "Animal copy constuctor called" << std::endl;
	*this = src; 
}

Animal	&Animal::operator=( const Animal &src )
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void	Animal::makeSound( void ) const
{
	std::cout << "############" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->_type);
}
