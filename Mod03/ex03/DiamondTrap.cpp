/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:50:14 by r                 #+#    #+#             */
/*   Updated: 2023/11/21 17:42:51 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitpoint = FragTrap::_hitpoint;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	if (this->_hitpoint < 1)
		std::cout << "DiamondTrap " << this->_name << " is dead !" << std::endl;
	else
	{
		std::cout << "DiamondTrap name: " << this->_name << "." << std::endl;
		std::cout << "ClapTrap name: " << ClapTrap::_name << "." << std::endl;
	}
}
