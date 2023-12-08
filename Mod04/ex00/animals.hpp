/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:00:51 by r                 #+#    #+#             */
/*   Updated: 2023/11/23 13:45:38 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_HPP
# define ANIMALS_HPP
# include <iostream>

class	Animal
{
	protected:
		std::string _type;
	
	public:
		Animal();
		Animal( const Animal &src );
		~Animal();
		Animal	&operator=( const Animal &src );

		virtual void	makeSound() const;
		std::string	getType() const;
};

#endif
