/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:11:29 by r                 #+#    #+#             */
/*   Updated: 2024/01/31 14:59:54 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_hitpoint = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_hitpoint = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap( const FragTrap &src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

FragTrap	&FragTrap::operator=( const FragTrap &src )
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_name = src._name;
	this->_hitpoint = src._hitpoint;
	this->_energy = src._energy;
	this->_attack = src._attack;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (this->_hitpoint < 1)
		std::cout << "FragTrap " << this->_name << " is dead !" << std::endl;
	else if (this->_energy < 1)
		std::cout << "FragTrap " << this->_name << " have no ernergy." << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " high five guys !!!" << std::endl;
}
