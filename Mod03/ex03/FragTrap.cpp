/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:11:29 by r                 #+#    #+#             */
/*   Updated: 2023/11/21 16:30:15 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hitpoint = 100;
	this->_energy = 100;
	this->_attack = 30;
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
