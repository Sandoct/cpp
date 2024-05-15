/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:05:06 by r                 #+#    #+#             */
/*   Updated: 2024/05/15 19:28:11 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
// Constructor initializes attributes to 0 by default 

Span::Span(): _size(0)
{
	std::cout << "Span constructor called" << std::endl;
}

Span::Span( const Span& rhs): _size(rhs->_size)
{
	std::cout << "Span copy constructor called" << std::endl;
	*this = rhs;
}

Span::Span(size_t number) : _size(number)
{
	std::cout << "Span constructor called" << std::endl;
	this->_vector.reserve(number);
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}

Span	&Span::operator=( const Span& rhs )
{
	(void)rhs;
	return *this;
}

void	Span::addNumber(size_t number)
{
	if (_vector.size() == _size)
		throw FullException();
	_vector.push_back(number);
}

size_t	Span::shortestSpan()
{
	size_t	span;

	if (_vector.size() < 2)
		throw TooShortException();
	sort(_vector.begin(), _vector.end());
	span = _vector.back() - _vector.front();
	for (size_t i = 0; i < _vector.size() - 1; i++)
	{
		if (static_cast<unsigned int>(_vector.at(i + 1) - _vector.at(i)) < span)
			span = _vector.at(i + 1) - _vector.at(i);
	}
	return (span);

}

size_t	Span::longestSpan()
{
	if (_vector.size() < 2)
		throw TooShortException();
	sort(_vector.begin(), _vector.end());
	return (_vector.back() - _vector.front());
}
