/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:41:57 by r                 #+#    #+#             */
/*   Updated: 2023/11/24 15:19:28 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat	man("henri", 20);
		std::cout << man << std::endl;
		std::cout << std::endl;
		try
		{
			Form	b1("b1", 200, 100);
			std::cout << b1 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			Form	b1("b1", 0, 100);
			std::cout << b1 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			Form	b1("b1", 20, 100);
			std::cout << b1 << std::endl;
			man.signForm(b1);
			std::cout << b1 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
