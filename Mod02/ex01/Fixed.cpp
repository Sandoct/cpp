/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:24:23 by r                 #+#    #+#             */
/*   Updated: 2023/11/17 11:42:53 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed( const int val ): _value( val << _bits )
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float number ): _value( roundf( number * ( 1 << _bits ) ) )
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed	&Fixed::operator=( Fixed const &src)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &src)
		this->_value = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member fuction called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

float	Fixed::toFloat() const
{
	return ( (float)_value / (1 << _bits) );
}

int		Fixed::toInt() const
{
	return ( _value >> _bits );
}

std::ostream &operator<<( std::ostream &o, Fixed const &src )
{
    o << src.toFloat();
    return (o);
}
