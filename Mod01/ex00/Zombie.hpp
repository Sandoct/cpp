/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:27:18 by r                 #+#    #+#             */
/*   Updated: 2023/11/08 17:26:01 by r                ###   ########.fr       */
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
