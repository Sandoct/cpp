/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:52:45 by r                 #+#    #+#             */
/*   Updated: 2023/11/14 15:49:24 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << this->_name << " enrolled and equiped " << std::flush;
	std::cout << ( std::string )this->_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " lay down " << std::flush;
	std::cout << ( std::string )this->_weapon.getType() << " and surrend." << std::endl;
}

void	HumanA::attack( void )
{
	std::cout << this->_name << " attack with " << std::flush;
	std::cout << ( std::string )this->_weapon.getType() << std::endl;
}
