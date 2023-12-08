/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:52:45 by r                 #+#    #+#             */
/*   Updated: 2023/11/14 15:49:41 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name) : _name(name)
{
	this->_weapon = NULL;
	std::cout << this->_name << " enrolled and equiped " << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->_name << " surrend." << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->_weapon = &weapon;
}

void	HumanB::attack( void )
{
	if (this->_weapon != NULL)
	{
		std::cout << this->_name << " attack with " << std::flush;
		std::cout << ( std::string )this->_weapon->getType() << std::endl;
	}
	else
		std::cout << this->_name << " attack barehanded " << std::endl;
}
