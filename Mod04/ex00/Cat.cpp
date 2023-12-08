/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:28:37 by r                 #+#    #+#             */
/*   Updated: 2023/11/23 13:43:48 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat constuctor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destuctor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}
