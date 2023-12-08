/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:57:00 by r                 #+#    #+#             */
/*   Updated: 2023/11/21 16:10:18 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap trap1("no name");
	ScavTrap trap2("Etalon du cul");
	ScavTrap trap3(trap2);

    trap1.attack("Etalon du cul");
    trap2.takeDamage(50);
    trap2.beRepaired(30);
    trap2.beRepaired(100);

    trap2.attack("no name");
    trap1.takeDamage(100);
    trap1.beRepaired(10);
    trap1.takeDamage(10);
    trap1.beRepaired(10);

	trap3.takeDamage(50);
	trap3.guardGate();
    return 0;
}
