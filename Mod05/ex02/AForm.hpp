/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:25:45 by r                 #+#    #+#             */
/*   Updated: 2023/11/30 16:49:44 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_sign;
		const int			_exec;
	
	public:
		AForm( const std::string name, const int sign, const int exec);
		AForm( const AForm &src );
		virtual	~AForm();
		AForm	&operator=( const AForm &src );

		std::string		getName() const;
		bool			getSigned() const;
		int				getSign() const;
		int				getExec() const;

		void			beSigned( const Bureaucrat &src );

		virtual void	execute( const Bureaucrat &src ) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return "Grade too high";
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Grade too low";
				}
		};
		class NotSignedException : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return "Can't execute a form not signed";
				}
		};
};

std::ostream	&operator<<(std::ostream &o, AForm const &rhs);

#endif
