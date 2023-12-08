/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:34:37 by r                 #+#    #+#             */
/*   Updated: 2023/11/10 14:52:02 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class	Weapon
{
	private :
		std::string	type;
	
	public :
		Weapon( std::string type);
		~Weapon();
		const std::string	&getType( void );
		void				setType( std::string type );
};

#endif
