/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:32:20 by r                 #+#    #+#             */
/*   Updated: 2023/11/24 15:01:47 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( const std::string name, const int sign, const int exec ) : _name(name), _sign(sign), _exec(exec)
{
	std::cout << "Form constructor called" << std::endl;
	this->_signed = false;
	if (this->_sign < 1 || this->_exec < 1)
		throw Form::GradeTooHighException();
	else if (this->_sign > 150 || this->_exec > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form::Form( const Form &src ) : _name(src.getName()), _sign(src.getSign()), _exec(src.getExec())
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form	&Form::operator=( const Form &src )
{
	std::cout << "Form assignement operator called" << std::endl;
	if (this != &src)
		this->_signed = src._signed;
	return (*this);
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int	Form::getSign() const
{
	return (this->_sign);
}

int	Form::getExec() const
{
	return (this->_exec);
}

void	Form::beSigned( const Bureaucrat &src )
{
	if (this->_sign > src.getGrade())
		throw Form::GradeTooLowException();
	this->_signed = true;
}

std::ostream	&operator<<( std::ostream &o, const Form &src )
{
	o << "Form : " << src.getName() << std::endl;
	o << "Grade to sign: " << src.getSign() << std::endl;
	o << "Grade to execute: " << src.getExec() << std::endl;
	if (src.getSigned())
		o << "Signed" << std::endl;
	else
		o << "Not signed" << std::endl;
	return o;
}
