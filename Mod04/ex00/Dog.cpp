/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:24:36 by r                 #+#    #+#             */
/*   Updated: 2024/01/31 16:13:16 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog constuctor called" << std::endl;
}

Dog::Dog( const Dog &src )
{
	std::cout << "Dog copy constuctor called" << std::endl;
	*this = src; 
}

Dog	&Dog::operator=( const Dog &src )
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destuctor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Whoaf" << std::endl;
}
