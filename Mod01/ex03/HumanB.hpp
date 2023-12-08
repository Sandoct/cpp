/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:42:39 by r                 #+#    #+#             */
/*   Updated: 2023/11/14 15:43:59 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class	HumanB
{
	private :
		std::string	_name;
		Weapon		*_weapon;

	public :
		HumanB( std::string name );
		~HumanB();
		void	attack( void );
		void	setWeapon( Weapon &weapon);
};

#endif
