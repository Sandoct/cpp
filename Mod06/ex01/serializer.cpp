/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpouzet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:06:58 by gpouzet           #+#    #+#             */
/*   Updated: 2024/03/12 10:40:04 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.hpp"

serializer::serializer()
{
	std::cout << "serializer constructor called" << std::endl;
}

serializer::serializer( const serializer& rhs)
{
	std::cout << "serializer copy constructor called" << std::endl;
	*this = rhs;
}

serializer::~serializer()
{
	std::cout << "serializer destructor called" << std::endl;
}

serializer	&serializer::operator=( const serializer& rhs )
{
	(void)rhs;
	return *this;
}

uintptr_t	serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
