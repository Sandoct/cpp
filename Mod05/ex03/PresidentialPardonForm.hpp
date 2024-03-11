/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:55:45 by r                 #+#    #+#             */
/*   Updated: 2023/11/27 17:56:05 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	private :
		std::string	_target;

	public :
		PresidentialPardonForm( std::string target);
		PresidentialPardonForm( const PresidentialPardonForm &src );
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=( const PresidentialPardonForm &src );

		void	execute( const Bureaucrat &src ) const;
};

#endif
