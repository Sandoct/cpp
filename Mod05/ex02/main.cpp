/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:41:57 by r                 #+#    #+#             */
/*   Updated: 2023/11/30 17:09:46 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat	man("henri", 5);
		std::cout << man << std::endl;
		std::cout << std::endl;
		try
		{
			ShrubberyCreationForm	bery("tree");
			std::cout << bery << std::endl;
			try
			{
				man.executeForm(bery);
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
			try
			{
				man.signForm(bery);
				try
				{
					man.executeForm(bery);
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
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			RobotomyRequestForm	roby("Claptrap");
			std::cout << roby << std::endl;
			try
			{
				man.signForm(roby);
				try
				{
					man.executeForm(roby);
				}
				catch (std::exception &e)
				{
					std::cout << e.what() << std::endl;
				}
				try
				{
					man.executeForm(roby);
				}
				catch (std::exception &e)
				{
					std::cout << e.what() << std::endl;
				}
				try
				{
					man.executeForm(roby);
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
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			PresidentialPardonForm	prez("bara");
			std::cout << prez << std::endl;
			try
			{
				man.signForm(prez);
				try
				{
					man.executeForm(prez);
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
