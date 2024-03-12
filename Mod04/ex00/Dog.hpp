/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:21:07 by r                 #+#    #+#             */
/*   Updated: 2024/01/31 16:10:09 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "animals.hpp"

class	Dog: public Animal
{
	public:
		Dog();
		Dog( const Dog &src );
		Dog	&operator=( const Dog &src );
		~Dog();

		void	makeSound() const;
};

#endif
