/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:21:07 by r                 #+#    #+#             */
/*   Updated: 2023/11/23 15:55:14 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "animals.hpp"
# include "Brain.hpp"

class	Dog: public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		~Dog();
//		Dog( const Dog &src );
		Dog	&operator=( const Dog &src );

		void	makeSound() const;
};

#endif
