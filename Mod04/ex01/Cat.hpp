/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:27:19 by r                 #+#    #+#             */
/*   Updated: 2023/11/23 15:55:02 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "animals.hpp"
# include "Brain.hpp"

class	Cat: public Animal
{
	private:
		Brain	*_brain;

	public:
		Cat();
		~Cat();
//		Cat( const Cat &src );
		Cat	&operator=( const Cat &src );

		void	makeSound() const;
};

#endif
