/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:11:38 by r                 #+#    #+#             */
/*   Updated: 2024/02/01 11:58:20 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	const WrongAnimal		*meta = new WrongAnimal();
	const Animal		*j = new Dog();
	const Animal		*i = new Cat();

	delete	meta;
	delete	i;
	delete	j;

	const Animal*	animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	for ( int i = 0; i < 4; i++ )
		delete animals[i];

	return 0;
}
