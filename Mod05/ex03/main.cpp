/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:41:57 by r                 #+#    #+#             */
/*   Updated: 2024/02/26 17:30:06 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		Bureaucrat	man("henri", 5);
		std::cout << man << std::endl;
		Intern	intern;
		std::cout << std::endl;
		try
		{
    		AForm	*bery = intern.makeForm("shrubbery creation", "tree");
			std::cout << *bery << std::endl;
			try
			{
				man.executeForm(*bery);
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
			try
			{
				man.signForm(*bery);
				try
				{
					man.executeForm(*bery);
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
    		delete bery;
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
