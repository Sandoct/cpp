/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:51:38 by r                 #+#    #+#             */
/*   Updated: 2024/01/23 15:38:14 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
	std::cout << "Harl constructed" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl destructed!" << std::endl;
}

void	Harl::complain( std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	t_func funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int			i = -1;
	while (++i < 4 && level.compare(levels[i]))
			;
	if (i < 4)
		(this->*funcs[i])();
	else
		std::cerr << "Unknown command" << std::endl;
}
