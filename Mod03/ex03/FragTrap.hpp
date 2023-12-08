/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:56:48 by r                 #+#    #+#             */
/*   Updated: 2023/11/21 17:33:04 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ScavTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap( std::string name );
		~FragTrap();

		void	highFivesGuys( void );
};

#endif
