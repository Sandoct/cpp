/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:32:20 by r                 #+#    #+#             */
/*   Updated: 2023/11/30 16:55:34 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( const std::string name, const int sign, const int exec ) : _name(name), _sign(sign), _exec(exec)
{
	std::cout << "AForm constructor called" << std::endl;
	this->_signed = false;
	if (this->_sign < 1 || this->_exec < 1)
		throw AForm::GradeTooHighException();
	else if (this->_sign > 150 || this->_exec > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm( const AForm &src ) : _name(src.getName()), _sign(src.getSign()), _exec(src.getExec())
{
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm	&AForm::operator=( const AForm &src )
{
	std::cout << "AForm assignement operator called" << std::endl;
	if (this != &src)
		this->_signed = src._signed;
	return (*this);
}

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

int	AForm::getSign() const
{
	return (this->_sign);
}

int	AForm::getExec() const
{
	return (this->_exec);
}

void	AForm::beSigned( const Bureaucrat &src )
{
	if (this->_sign < src.getGrade())
		throw AForm::GradeTooLowException();
	this->_signed = true;
}

std::ostream	&operator<<( std::ostream &o, const AForm &src )
{
	o << "AForm : " << src.getName() << std::endl;
	o << "Grade to sign: " << src.getSign() << std::endl;
	o << "Grade to execute: " << src.getExec() << std::endl;
	if (src.getSigned())
		o << "Signed" << std::endl;
	else
		o << "Not signed" << std::endl;
	return o;
}
