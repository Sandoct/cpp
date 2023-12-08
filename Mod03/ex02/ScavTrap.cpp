/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:28:26 by r                 #+#    #+#             */
/*   Updated: 2023/11/21 16:21:52 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hitpoint = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack( const std::string &target )
{
	if (this->_energy < 1)
		std::cout << "ScavTrap " << this->_name << " have no ernergy !!!" << std::endl;
	else
	{
		this->_energy--;
		std::cout << "ScavTrap " << this->_name << " attack " << target << std::flush;
		std::cout << ", causing " << this->_attack << " points of damage !"<< std::endl;
	}
}

void	ScavTrap::guardGate()
{
	if (this->_hitpoint < 1)
		std::cout << "ScavTrap " << this->_name << " is dead !!!" << std::endl;
	else if (this->_energy < 1)
		std::cout << "ScavTrap " << this->_name << " have no ernergy !!!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
