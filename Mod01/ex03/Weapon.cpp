/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:34:27 by r                 #+#    #+#             */
/*   Updated: 2023/11/10 15:26:00 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->setType(type);
	std::cout << this->type << " has been created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Genéve convention banned " << this->type << std::endl;
}

const std::string	&Weapon::getType( void )
{
	return (this->type);
}

void	Weapon::setType( std::string newType )
{
	this->type = newType;
}
