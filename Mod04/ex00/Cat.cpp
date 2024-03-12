/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:28:37 by r                 #+#    #+#             */
/*   Updated: 2024/01/31 16:12:20 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat constuctor called" << std::endl;
}

Cat::Cat( const Cat &src )
{
	std::cout << "Cat copy constuctor called" << std::endl;
	*this = src; 
}

Cat	&Cat::operator=( const Cat &src )
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destuctor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}
