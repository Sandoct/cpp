/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:07:14 by r                 #+#    #+#             */
/*   Updated: 2023/11/23 14:36:55 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constuctor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destuctor called" << std::endl;
}

Brain::Brain( const Brain &src )
{
	std::cout << "Brain copy constuctor called" << std::endl;
	*this = src; 
}

Brain	&Brain::operator=( const Brain &src )
{
	std::cout << "Brain copy assignement operator called" << std::endl;
	if (this != &src)
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	return (*this);
}
