/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:40:50 by r                 #+#    #+#             */
/*   Updated: 2023/11/17 11:42:32 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;
	
	public:
		Fixed();
		Fixed( const int val );
		Fixed( const float number );
		Fixed( Fixed const &src );
		Fixed &operator=( Fixed const &src);
		~Fixed();
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
		float toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream &operator<<( std::ostream &o, Fixed const &src );

#endif
