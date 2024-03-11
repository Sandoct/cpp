/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:14:44 by r                 #+#    #+#             */
/*   Updated: 2024/02/26 17:16:13 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern( const Intern &src )
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
}

Intern	&Intern::operator=( const Intern &src )
{
	std::cout << "Intern assignement operator called" << std::endl;
	( void ) src;
	return (*this);
}

static AForm	*createShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm	*createRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm	*createPresident(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm( std::string name, std::string target )
{
	std::string	form_name[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *(*forms[3])(std::string target) = {&createShrubbery, &createRobotomy, &createPresident};
	for (int i = 0; i < 3; i++)
	{
		if (name == form_name[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((forms[i])(target));
		}
	}
	std::cout << "Error! : Intern can't creates unknow form" << std::endl;
	return (NULL);
}
