/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:28:37 by r                 #+#    #+#             */
/*   Updated: 2023/11/23 13:58:46 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat constuctor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destuctor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}
