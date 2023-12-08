/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:35:55 by r                 #+#    #+#             */
/*   Updated: 2023/11/30 16:58:14 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target )
: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &src )
: AForm( src ), _target(src._target)
{
	std::cout << "AForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &src )
{
	std::cout << "RobotomyRequestForm assignement operator called" << std::endl;
	if (this != &src)
		this->_target = src._target;
	return (*this);
}

void	RobotomyRequestForm::execute( const Bureaucrat &src ) const
{
	if (!this->getSigned())
		throw AForm::NotSignedException();
	else if ( src.getGrade() > this->getExec())
		throw AForm::GradeTooLowException();

	std::cout << "Bzzzz Bzzzzzzzzz Bzz" << std::endl;
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " robotomization failed" << std::endl;
}
