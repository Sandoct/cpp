/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:12:07 by r                 #+#    #+#             */
/*   Updated: 2024/01/31 14:54:34 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &src );
		ScavTrap &operator=( const ScavTrap &src );
		~ScavTrap( void );

		void	attack( const std::string &target );
		void	guardGate();
};

#endif
