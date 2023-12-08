/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:07:23 by r                 #+#    #+#             */
/*   Updated: 2023/11/21 15:32:44 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class	ClapTrap
{
	protected:
		std::string _name;
		int			_hitpoint;
		int			_energy;
		int			_attack;

	public:
		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &src );
		ClapTrap &operator=( const ClapTrap &src );
		~ClapTrap( void );

		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};
