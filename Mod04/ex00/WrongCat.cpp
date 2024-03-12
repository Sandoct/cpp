/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:28:37 by r                 #+#    #+#             */
/*   Updated: 2024/02/01 11:51:33 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat constuctor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &src )
{
	std::cout << "WrongCat copy constuctor called" << std::endl;
	*this = src; 
}

WrongCat	&WrongCat::operator=( const WrongCat &src )
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destuctor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Woaf" << std::endl;
}
