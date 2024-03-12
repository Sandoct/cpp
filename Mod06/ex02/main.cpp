/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpouzet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:56:32 by gpouzet           #+#    #+#             */
/*   Updated: 2024/03/12 12:03:15 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <time.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int	n = rand() % 3;

	if (n == 0)
		return (new A());
	else if (n == 1)
		return (new B());
	else if (n == 2)
		return (new C());
	std::cout << "error in generate" << std::endl;
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Type identified as A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Type identified as B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Type identified as C" << std::endl;
	else
		std::cout << "Type unknow" << std::endl;
}

void identify(Base& p)
{
	try {
		(void) dynamic_cast<A &>(p);
		std::cout << "Type identified as A" << std::endl;
		return ;
	}
	catch (const std::exception& e) {}
	try {
		(void) dynamic_cast<B &>(p);
		std::cout << "Type identified as B" << std::endl;
		return ;
	}
	catch (const std::exception& e) {}
	try {
		(void) dynamic_cast<C &>(p);
		std::cout << "Type identified as C" << std::endl;
		return ;
	}
	catch (const std::exception& e) {}
	std::cout << "Type unknow" << std::endl;
}

int	main()
{
	srand (time(NULL));

	Base*	a = generate();
	Base*	b = generate();
	Base*	c = generate();
	
	identify(a);
	identify(*a);
	identify(b);
	identify(*b);
	identify(c);
	identify(*c);

	return (0);
}
