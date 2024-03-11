/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:13:21 by r                 #+#    #+#             */
/*   Updated: 2024/02/26 16:58:54 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "AForm.hpp"

class	AForm;

class	Intern
{
	public:
		Intern();
		Intern( const Intern &src );
		~Intern();
		Intern	&operator=( const Intern &src );

		AForm	*makeForm(std::string name, std::string target);
};

#endif
