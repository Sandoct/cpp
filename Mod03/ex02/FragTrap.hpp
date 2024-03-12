/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:56:48 by r                 #+#    #+#             */
/*   Updated: 2024/01/31 15:00:57 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap( std::string name );
		FragTrap( const FragTrap &src );
		FragTrap &operator=( const FragTrap &src );
		~FragTrap();

		void	highFivesGuys( void );
};

#endif
