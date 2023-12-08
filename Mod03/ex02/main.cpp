/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:57:00 by r                 #+#    #+#             */
/*   Updated: 2023/11/21 16:39:29 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	trap1;
	ScavTrap	trap2("Etalon du cul");
	FragTrap	trap3("sirene");

    trap1.attack("Etalon du cul");
    trap2.takeDamage(50);
    trap2.beRepaired(20);
	trap2.guardGate();

    trap2.attack("sirene");
    trap3.takeDamage(50);
    trap3.beRepaired(10);
	trap3.highFivesGuys();
    return 0;
}
