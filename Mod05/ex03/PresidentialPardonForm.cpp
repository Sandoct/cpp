/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:57:32 by r                 #+#    #+#             */
/*   Updated: 2023/11/30 16:58:04 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target )
: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &src )
: AForm( src ), _target(src._target)
{
	std::cout << "AForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &src )
{
	std::cout << "PresidentialPardonForm assignement operator called" << std::endl;
	if (this != &src)
		this->_target = src._target;
	return (*this);
}

void	PresidentialPardonForm::execute( const Bureaucrat &src ) const
{
	if (!this->getSigned())
		throw AForm::NotSignedException();
	else if ( src.getGrade() > this->getExec())
		throw AForm::GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
