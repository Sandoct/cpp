/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:17:51 by r                 #+#    #+#             */
/*   Updated: 2023/11/21 15:33:30 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("no name"), _hitpoint(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitpoint(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &src )
{
	std::cout << "Claptrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &src )
{
	std::cout << "Claptrap copy assignement operator called" << std::endl;
	this->_name = src._name;
	this->_hitpoint = src._hitpoint;
	this->_energy = src._energy;
	this->_attack = src._attack;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack( const std::string &target )
{
	if (this->_energy < 1)
		std::cout << "ClapTrap " << this->_name << " have no ernergy !!!" << std::endl;
	else
	{
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << " attack " << target << std::flush;
		std::cout << ", causing " << this->_attack << " points of damage !"<< std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitpoint < 1)
		std::cout << "ClapTrap " << this->_name << " is already dead !!!" << std::endl;
	else
	{
		this->_hitpoint -= amount; 
		std::cout << "ClapTrap " << this->_name << " take " << std::flush;
		std::cout << amount << " points of damage !"<< std::endl;
		if (this->_hitpoint < 1)
			std::cout << "ClapTrap " << this->_name << " died !!!" << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitpoint < 1)
		std::cout << "ClapTrap " << this->_name << " can't repaire because it's dead !!!" << std::endl;
	else if (this->_energy < 1)
		std::cout << "ClapTrap " << this->_name << " have no ernergy !!!" << std::endl;
	else
	{
		this->_energy--; 
		if (this->_hitpoint + amount > 10)
		{
			this->_hitpoint = 10; 
			std::cout << "ClapTrap " << this->_name << " fully repaire itself." << std::endl;
		}
		else
		{
			this->_hitpoint += amount; 
			std::cout << "ClapTrap" << this->_name << " repaire itself by " << std::flush;
			std::cout << amount << " Hit points !" << std::endl;
		}
	}
}
