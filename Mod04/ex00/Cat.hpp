/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:27:19 by r                 #+#    #+#             */
/*   Updated: 2024/01/31 16:09:29 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "animals.hpp"

class	Cat: public Animal
{
	public:
		Cat();
		Cat( const Cat &src );
		Cat	&operator=( const Cat &src );
		~Cat();

		void	makeSound() const;
};

#endif
