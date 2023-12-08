/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:28:37 by r                 #+#    #+#             */
/*   Updated: 2023/11/23 15:54:48 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constuctor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new	Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destuctor called" << std::endl;
	delete this->_brain;
}
/*
Cat::Cat( const Cat &src )
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}
*/
Cat	&Cat::operator=( const Cat &src )
{
	std::cout << "Cat assignement operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		delete this->_brain;
		this->_brain = new	Brain(*src._brain);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}
