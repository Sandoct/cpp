/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:01:06 by r                 #+#    #+#             */
/*   Updated: 2023/11/27 14:40:06 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	
	public:
		Bureaucrat( const std::string name, int grade);
		Bureaucrat( const Bureaucrat &src );
		~Bureaucrat();
		Bureaucrat	&operator=( const Bureaucrat &src );

		std::string		getName() const;
		int				getGrade() const;
		void			increment();
		void			decrement();
		void			signForm( Form &form );

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

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
