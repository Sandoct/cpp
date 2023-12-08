/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:57:00 by r                 #+#    #+#             */
/*   Updated: 2023/11/21 17:17:04 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap	trap1;
	DiamondTrap	trap2("Etalon du cul");

    trap2.attack("Etalon du cul");
    trap2.takeDamage(50);
    trap2.beRepaired(20);
	trap2.guardGate();
	trap2.highFivesGuys();
	trap2.whoAmI();
    return 0;
}
