/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:07:23 by r                 #+#    #+#             */
/*   Updated: 2023/11/21 14:13:52 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include "iostream"

class	ClapTrap
{
	private:
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

#endif
