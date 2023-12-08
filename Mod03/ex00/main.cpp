/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:57:00 by r                 #+#    #+#             */
/*   Updated: 2023/11/21 14:07:15 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap claptrap1;
	ClapTrap claptrap2("Etalon du cul");
	ClapTrap claptrap3(claptrap2);

    claptrap1.attack("Etalon du cul");
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(3);
    claptrap2.beRepaired(10);

    claptrap2.attack("no name");
    claptrap1.takeDamage(100);
    claptrap1.beRepaired(10);
    claptrap1.takeDamage(10);
    claptrap1.beRepaired(10);
    return 0;
}
