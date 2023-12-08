/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:42:39 by r                 #+#    #+#             */
/*   Updated: 2023/11/14 15:45:32 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class	HumanA
{
	private :
		std::string	_name;
		Weapon		&_weapon;

	public :
		HumanA( std::string name, Weapon &weapon );
		~HumanA();
		void	attack( void );
};

#endif
