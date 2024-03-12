/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:00:51 by r                 #+#    #+#             */
/*   Updated: 2024/02/01 11:02:47 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class	WrongAnimal
{
	protected:
		std::string _type;
	
	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal &src );
		WrongAnimal	&operator=( const WrongAnimal &src );
		virtual ~WrongAnimal();

		void	makeSound() const;
		std::string	getType() const;
};

#endif
