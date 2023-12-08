/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:07:10 by r                 #+#    #+#             */
/*   Updated: 2023/11/27 18:02:50 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"
# include <fstream>

class	ShrubberyCreationForm : public AForm
{
	private :
		std::string	_target;

	public :
		ShrubberyCreationForm( std::string target);
		ShrubberyCreationForm( const ShrubberyCreationForm &src );
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=( const ShrubberyCreationForm &src );

		void	execute( const Bureaucrat &src ) const;
};

#endif
