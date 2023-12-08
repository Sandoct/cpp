/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:25:45 by r                 #+#    #+#             */
/*   Updated: 2023/11/27 14:40:00 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_sign;
		const int			_exec;
	
	public:
		Form( const std::string name, const int sign, const int exec);
		Form( const Form &src );
		~Form();
		Form	&operator=( const Form &src );

		std::string	getName() const;
		bool		getSigned() const;
		int			getSign() const;
		int			getExec() const;
		void		beSigned( const Bureaucrat &src );

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return "Grade too high, limite 1";
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Grade too low, limite 150";
				}
		};
};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);

#endif
