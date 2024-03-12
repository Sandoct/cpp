/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:28:26 by r                 #+#    #+#             */
/*   Updated: 2024/01/31 14:53:13 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hitpoint = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hitpoint = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap( const ScavTrap &src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &src )
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_name = src._name;
	this->_hitpoint = src._hitpoint;
	this->_energy = src._energy;
	this->_attack = src._attack;
	return (*this);
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
