/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:00:51 by r                 #+#    #+#             */
/*   Updated: 2023/11/23 14:32:56 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class	Brain
{
	protected:
		std::string _ideas[100];
	
	public:
		Brain();
		Brain( const Brain &src );
		~Brain();
		Brain	&operator=( const Brain &src );
};

#endif
