/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:00:51 by r                 #+#    #+#             */
/*   Updated: 2023/11/23 14:12:55 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMALS_HPP
# include <iostream>

class	WrongAnimal
{
	protected:
		std::string _type;
	
	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal &src );
		~WrongAnimal();
		WrongAnimal	&operator=( const WrongAnimal &src );

		void	makeSound() const;
		std::string	getType() const;
};

#endif
