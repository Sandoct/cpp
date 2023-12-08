/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:07:14 by r                 #+#    #+#             */
/*   Updated: 2023/11/23 13:56:21 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal constuctor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destuctor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &src )
{
	std::cout << "WrongAnimal copy constuctor called" << std::endl;
	*this = src; 
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &src )
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "############" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->_type);
}
