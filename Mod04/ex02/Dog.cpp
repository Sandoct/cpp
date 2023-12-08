/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:24:36 by r                 #+#    #+#             */
/*   Updated: 2023/11/23 15:54:56 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constuctor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destuctor called" << std::endl;
	delete this->_brain;
}
/*
Dog::Dog( const Dog &src )
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}
*/
Dog	&Dog::operator=( const Dog &src )
{
	std::cout << "Dog assignement operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		delete this->_brain;
		this->_brain = new	Brain(*src._brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Whoaf" << std::endl;
}
