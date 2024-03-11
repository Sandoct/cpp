/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:35:55 by r                 #+#    #+#             */
/*   Updated: 2023/11/30 17:42:55 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &src )
: AForm( src ), _target(src._target)
{
	std::cout << "AForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &src )
{
	std::cout << "ShrubberyCreationForm assignement operator called" << std::endl;
	if (this != &src)
		this->_target = src._target;
	return (*this);
}

void	ShrubberyCreationForm::execute( const Bureaucrat &src ) const
{
	if (!this->getSigned())
		throw AForm::NotSignedException();
	else if ( src.getGrade() > this->getExec())
		throw AForm::GradeTooLowException();

	std::ofstream file( (this->_target + "_shrubbery").c_str() );
	file << "       # #### ####" << std::endl;
	file << "     ### /#|### #|/####" << std::endl;
	file << "    ##/#/ ||/##/#_/##/_#" << std::endl;
	file << "  ###  |/###|/ #/ # ###" << std::endl;
	file << " ##__#_## | #/###_/_####" << std::endl;
	file << "## #### #  #| /  #### ##/##" << std::endl;
	file << " __#_--###`  |{,###---###-~" << std::endl;
	file << "             |}{" << std::endl;
	file << "             }}{" << std::endl;
	file << "             }}{" << std::endl;
	file << "             }{}" << std::endl;
	file << "       , -=-~{ .-^- _" << std::endl;
	file.close();
}
