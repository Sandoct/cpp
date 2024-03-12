/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:40:50 by r                 #+#    #+#             */
/*   Updated: 2024/01/24 11:41:13 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class	Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;
	
	public:
		Fixed();
		Fixed( Fixed const &src );
		Fixed &operator=( Fixed const &src);
		~Fixed();
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
