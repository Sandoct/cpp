/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:24:36 by r                 #+#    #+#             */
/*   Updated: 2023/11/23 13:46:10 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog constuctor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destuctor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Whoaf" << std::endl;
}
