/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:27:18 by r                 #+#    #+#             */
/*   Updated: 2024/01/23 15:08:27 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class	Zombie
{
	private:
		std::string	_name;
	
	public:
		Zombie();
		~Zombie();
		void	announce( void );
		Zombie	*newZombie( std::string name );
		void	randomChump( std::string name );
		void	setName( std::string name );
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif
