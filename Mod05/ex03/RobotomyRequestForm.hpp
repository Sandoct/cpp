/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:07:10 by r                 #+#    #+#             */
/*   Updated: 2023/11/27 18:00:23 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"
# include <stdlib.h>

class	RobotomyRequestForm : public AForm
{
	private :
		std::string	_target;

	public :
		RobotomyRequestForm( std::string target);
		RobotomyRequestForm( const RobotomyRequestForm &src );
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=( const RobotomyRequestForm &src );

		void	execute( const Bureaucrat &src ) const;
};

#endif
