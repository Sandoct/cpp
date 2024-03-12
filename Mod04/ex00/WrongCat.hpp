/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:27:19 by r                 #+#    #+#             */
/*   Updated: 2024/01/31 16:10:39 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat( const WrongCat &src );
		WrongCat	&operator=( const WrongCat &src );
		~WrongCat();

		void	makeSound() const;
};

#endif
